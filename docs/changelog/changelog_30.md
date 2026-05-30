# Changelog 30

- Added Verilator build artefacts to `.gitignore`: `sim/verilator/obj_dir` and `*.vcd` are no longer tracked
- Removed previously cached editor and tool configuration that should not have been in the repo: `.settings/` (Sigasi/Eclipse preferences) and `.vscode/settings.json`
- Removed the legacy `other/` directory: `other/hexgen/hexgen.py` and `other/hexgen/hexgenraw.py` (early NOP-fill hex generators, superseded by the per-test makefiles under `tests/directed/`), `other/opcode_listings_rv32_64g.txt`, and `other/todo.txt`. Note: `CLAUDE.md` still references `other/hexgen/` as the way to generate `program.hex`; that section is now stale and should be updated when the doc is next touched
- Removed the committed Verilator generated outputs from `sim/verilator/obj_dir/` (the `Vtop*` C++/header/object files, `Vtop` binary, archives, and dependency files) and `sim/verilator/dump.vcd`; these are now regenerated locally and ignored
