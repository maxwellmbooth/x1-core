# Changelog 7

- Removed the redundant `mem_re` (memory read enable) signal — the RAM now always reads on non-write cycles, so an explicit read enable was unnecessary
- Removed `mem_re` from the control signals struct, the RAM module port, and all instruction decode cases in the control unit
