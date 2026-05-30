# Changelog 29

- Split `rtl/pkg/common_pkg.sv` into three packages along clean responsibility lines:
  - `rtl/pkg/riscv_pkg.sv` — ISA-facing definitions: `XLEN`, `PC_RESET`, opcode enum, instruction-type enum, ALU/branch/store/load operation enums
  - `rtl/pkg/mem_pkg.sv` — memory-interface structs: `mem_req_t` and `mem_rsp_t` (with `epoch`, `id`, address-invalid, etc.)
  - `rtl/pkg/core_pkg.sv` (renamed from `common_pkg.sv`) — pipeline-internal types: ALU/RD mux selects, per-stage info/ctrl structs, `pc_redirect_t`, `ctrl_signals_t`, and the IF→ID/ID→EX/EX→MEM/MEM→WB pipeline registers. `core_pkg` re-imports `riscv_pkg` and `mem_pkg` so downstream modules only need a single `import core_pkg::*;`
- Updated every RTL file (`alu`, `control_unit`, `core`, `program_counter`, `ram`, `regfile`, `rom`, all five stage modules, `top`) to import `core_pkg` instead of the old `common_pkg`
- Removed `docs/To-Do.md` and `docs/info.md` — both were stale and their contents are now superseded by the changelogs and current code state
- Added a `tests/directed/memreqrsp/` directory with a `makefile` (assembles `prog.s` with `riscv64-unknown-elf-as`, links with a custom `linker.ld`, and emits a 65 536-line `prog.hex` padded with NOPs via `od` + `yes 00000013`) and an empty `prog.s` placeholder for the upcoming memory request/response directed test
- Added `sim/questa/rtl_work/` to `.gitignore` so the Questa work library is no longer tracked, and pruned the previously committed `rtl_work/` artefacts from the index
- Tidied the Claude `.gitignore` comment to clarify that all RTL is handwritten and Claude is only used to generate changelogs
