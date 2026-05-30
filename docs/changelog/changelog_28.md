# Changelog 28

- Renamed `clk`/`rst` ports to `clk_i`/`rst_i` in `stage_mem.sv` (and updated the corresponding instantiation in `core.sv`) to match the suffixed-port convention used everywhere else in the RTL
- Widened the RAM address space in `ram.sv`: `RAM_ADDR_WIDTH` raised from 8 to 16 (depth grows from 256B to 256KiB), and `addr_i` widened from `RAM_ADDR_WIDTH-1:0` to a full 32-bit input. Reads and writes now subtract the DMEM base `32'h00040000` and use bits `[17:2]` to index `mem`, so DMEM lives in its own address region distinct from ROM
- Added `/* verilator public_flat_rd */` to the `mem` array in `ram.sv` and `--public-flat-rw` to the Verilator flags so the C++ testbench can poke RAM contents directly from the simulator root
- Extended `tb/top_tb.cpp` with command-line argument parsing: `--hex`, `--sig`, `--sig-base`, `--sig-end` are now consumed so the same binary can run different programs and dump a signature region at end-of-test by reading `top->rootp->...->ram_inst__DOT__mem` and writing one word per line. Also raised `MAX_CYCLES` from 10 000 to 1 000 000
- Added a `riscof` target to `sim/verilator/makefile` that runs `Vtop` with the hex/signature/base/end flags wired through
- Began RISCOF integration: new `riscof/config.ini`, plus DUT and reference plugins (`riscof/x1/riscof_x1.py` with linker script and `model_test.h`, and a Spike reference under `riscof/spike/`). Also added a `tests/arch/riscv-arch-test` submodule reference for the upstream architectural test suite
- Deleted the obsolete `rtl/ram_new.sv` draft (the request/response RAM skeleton from changelog 23) — the work is being redone in place rather than alongside the existing module
