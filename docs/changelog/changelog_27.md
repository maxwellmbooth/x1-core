# Changelog 27

- Fixed ALU `OR` and `AND` operations in `alu.sv`: replaced `||`/`&&` (logical, collapses to 1 bit) with `|`/`&` (bitwise, full 32-bit)
- Fixed bit-width of the shift-amount operand in `stage_ex.sv`: `ALU_B_SEL_SHAMT` now zero-extends the 5-bit shamt to 32 bits (`{27'd0, id_ex_i.shamt}`) before passing it to the ALU
- Fixed bit-width of store data in `stage_mem.sv`: `STORE_BYTE` and `STORE_HALF` now explicitly zero-extend to 32 bits before writing; also corrected `RD_SEL_MEM` forward data initialiser from `31'd0` to `32'd0`
- Fixed bit-width of unsigned load data in `stage_wb.sv`: `LOAD_BYTEU` and `LOAD_HALFU` now zero-extend with explicit `{24'd0, ...}` / `{16'd0, ...}` concatenation instead of implicit truncation
- Fixed PC redirect re-fire bug in `stage_ex.sv`: the redirect combinational logic now suppresses itself for one cycle when `pc_redirect_q.valid` is already set, preventing the redirect from being re-asserted on the cycle after it was consumed
- Added `ctrl_ex.flush_ex_mem` to the redirect flush in `core.sv`, so the EX→MEM register is also flushed on a branch/jump alongside IF→ID and ID→EX
- Added Verilator simulation support: new `sim/verilator/makefile` compiles all RTL with Verilator and VCD tracing enabled; `tb/top_tb.cpp` is the C++ testbench driver
- Made `HEX_FILE` a string parameter on `rom` and `top` and threaded it through to `$readmemh`, allowing different testbenches to load different hex images without modifying the RTL
- Added first directed test under `tests/directed/jmptest/`: assembly source, linker script, makefile, and pre-built hex for a jump-heavy program
- Renamed `sim/program.hex` to `sim/prog.hex`
