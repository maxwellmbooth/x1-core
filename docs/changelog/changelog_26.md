# Changelog 26

- Removed the stale `imem_req_inflight` stall block from `core.sv`: it was incorrectly inserting a bubble and holding the PC on every cycle a request was in flight, which prevented the pipeline from ever advancing past the first fetch
- Fixed `pc_issued_q` tracking in `stage_if.sv`: now latches `pc_q` (the PC of the current cycle's request) rather than `pc_next` (the speculatively advanced PC), so the correct fetch address is associated with the response when it arrives one cycle later
- Changed the IF→ID register update logic in `stage_if.sv`: when `stall_hold_if_id` is not asserted, the stage now always writes the register — inserting a bubble explicitly if the IMEM response is not valid or epoch-matched, rather than holding the old value
- Normalised all RTL source files from CRLF to LF line endings
