#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define MAX_CYCLES 10000

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

  // reset before program
  top->rst_i = 1; top->eval();
  tfp->dump(sim_time++);
  top->rst_i = 0; top->eval();
  tfp->dump(sim_time++);

  // run program
  for (int cycle = 0; cycle < MAX_CYCLES; cycle++) {
      tick(top, tfp);
  }

  tfp->close();
  delete top;
  delete ctx;

  return 0;
}