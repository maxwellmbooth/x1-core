#include "Vtop.h"
#include "Vtop___024root.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define MAX_CYCLES 1000000

static vluint64_t sim_time = 0;

static void tick(Vtop* top, VerilatedVcdC* tfp) {
  top->clk_i = 0; top->eval();
  tfp->dump(sim_time++);
  top->clk_i = 1; top->eval();
  tfp->dump(sim_time++);
}

int main(int argc, char** argv) {
  VerilatedContext* ctx = new VerilatedContext;
  ctx->commandArgs(argc, argv);
  ctx->traceEverOn(true);

  Vtop* top = new Vtop{ctx};

  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace(tfp, 99); // trace depth 99
  tfp->open("dump.vcd");

  const char* hex_file = "prog.hex";
  const char* sig_file = nullptr;
  uint32_t sig_base = 0x00040000;
  uint32_t sig_end = 0x00040100;

  for (int i = 1; i < argc; i++) {
      if (!strcmp(argv[i], "--hex") && i+1 < argc) hex_file = argv[++i];
      if (!strcmp(argv[i], "--sig") && i+1 < argc) sig_file = argv[++i];
      if (!strcmp(argv[i], "--sig-base") && i+1 < argc) sig_base = strtoul(argv[++i], 0, 16);
      if (!strcmp(argv[i], "--sig-end") && i+1 < argc) sig_end  = strtoul(argv[++i], 0, 16);
  }

  // reset before program
  top->rst_i = 1; top->eval();
  tfp->dump(sim_time++);
  top->rst_i = 0; top->eval();
  tfp->dump(sim_time++);

  // run program
  for (int cycle = 0; cycle < MAX_CYCLES; cycle++) {
      tick(top, tfp);
  }

  // dump signature if needed
  if (sig_file) {
    FILE* f = fopen(sig_file, "w");
    for (uint32_t addr = sig_base; addr < sig_end; addr += 4) {
      uint32_t word = top->rootp->top__DOT__core_inst__DOT__stage_mem_inst__DOT__ram_inst__DOT__mem[addr >> 2];
      fprintf(f, "%08x\n", word);
    }
    fclose(f);
  }

  tfp->close();
  delete top;
  delete ctx;

  return 0;
}