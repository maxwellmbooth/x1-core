# x1-core Documentation

## Changelog

- [Changelog 1](changelog/changelog_1.md) — Initial creation of the x1-core RV32I processor
- [Changelog 2](changelog/changelog_2.md) — Added README.md
- [Changelog 3](changelog/changelog_3.md) — Updated .gitignore
- [Changelog 4](changelog/changelog_4.md) — Updated README.md
- [Changelog 5](changelog/changelog_5.md) — Updated README.md
- [Changelog 6](changelog/changelog_6.md) — Updated README.md
- [Changelog 7](changelog/changelog_7.md) — Removed redundant mem_re signal
- [Changelog 8](changelog/changelog_8.md) — Added load-use hazard stalling and data forwarding
- [Changelog 9](changelog/changelog_9.md) — Fixed ROM addressing and PC redirect reset
- [Changelog 10](changelog/changelog_10.md) — Fixed MEM stage load data access bug
- [Changelog 11](changelog/changelog_11.md) — Restructured project directories and updated FPGA target
- [Changelog 12](changelog/changelog_12.md) — Major refactor to industry-standard RTL conventions
- [Changelog 13](changelog/changelog_13.md) — Created rtl/pkg/common_pkg.sv and added IDE support
- [Changelog 14](changelog/changelog_14.md) — Made all RTL patterns Quartus-compatible
- [Changelog 15](changelog/changelog_15.md) — Added Questa simulation setup and fixed WB load extraction
- [Changelog 16](changelog/changelog_16.md) — Minor README update
- [Changelog 17](changelog/changelog_17.md) — Fixed branch/jump flushing and ROM word addressing
- [Changelog 18](changelog/changelog_18.md) — Simulation artifacts from branching fix
- [Changelog 19](changelog/changelog_19.md) — Fixed ADDI decoded as SUB and EX redirect-during-flush bug
- [Changelog 20](changelog/changelog_20.md) — Added IMEM generic request/response interface
- [Changelog 21](changelog/changelog_21.md) — Created top.sv, fixed redirect bubbling, new testbench
- [Changelog 22](changelog/changelog_22.md) — Added epoch/ID tracking to IMEM requests and DMEM skeleton
- [Changelog 23](changelog/changelog_23.md) — Added ram_new.sv draft with request/response interface
- [Changelog 24](changelog/changelog_24.md) — Fixed IMEM response handling and simplified PC module
- [Changelog 25](changelog/changelog_25.md) — Minor port-width and ROM ready-signal fixes
- [Changelog 26](changelog/changelog_26.md) — Removed stale IMEM inflight stall and fixed PC tracking in IF
- [Changelog 27](changelog/changelog_27.md) — ALU/shift/load/store width fixes, redirect re-fire fix, Verilator support, jmptest
- [Changelog 28](changelog/changelog_28.md) — Began RISCOF integration, widened RAM address space, signature dump in tb
- [Changelog 29](changelog/changelog_29.md) — Split common_pkg.sv into riscv_pkg/mem_pkg/core_pkg, added memreqrsp test stub
- [Changelog 30](changelog/changelog_30.md) — Removed cached IDE/Verilator artefacts and `other/` directory, gitignore additions
