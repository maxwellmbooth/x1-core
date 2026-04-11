# Changelog 8

Major pipeline hazard handling work:

- Added load-use hazard detection: when a load is followed immediately by an instruction that reads the loaded register, the pipeline now stalls for one cycle (freezes IF and ID, inserts a bubble into EX)
- Added a formal stall type system with four stall modes (none, freeze, bubble/NOP, flush) and a per-stage stall configuration struct
- Added data forwarding: the EX stage now receives the result from the MEM and WB stages so RAW (read-after-write) hazards between non-load instructions can be resolved without stalling
- Added a `flags_t` struct passed between stages to communicate hazard conditions (e.g. load-use detected in ID, forwarded to core for stall arbitration)
- Added constants for NOP control signals and a pre-built NOP pipeline register value used when injecting bubbles
- Added `rs1_addr` and `rs2_addr` to the ID→EX pipeline register so the EX stage can compare them against forwarding candidates
