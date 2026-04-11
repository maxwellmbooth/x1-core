# Changelog 12

Major refactor to bring the codebase in line with industry-standard RTL conventions:

- Deleted `rtl/common_pkg.sv` (types moved to a dedicated package file in the next commit)
- Renamed all ports to use `_i`/`_o` suffixes and all registers to use `_d`/`_q` suffixes consistently across all pipeline stages
- Rewrote control flow in all five stages to use `always_comb`/`always_ff` blocks with clear separation of combinational next-state logic and sequential register updates
- Renamed "flags" to "info" signals for communicating hazard state out of each stage
- Renamed the stall/flush control signals throughout (e.g. `flush_id` → `flush_if_id`, `stall_bubble_ex` → `stall_bubble_id_ex`)
- Updated Quartus settings to point to the Questa simulation output directory
- Updated README to describe the new architecture
