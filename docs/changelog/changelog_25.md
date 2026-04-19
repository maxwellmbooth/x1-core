# Changelog 25

- Fixed bit-width of `pc_next_i` port in `program_counter.sv` from bare `logic` to `logic [XLEN-1:0]`
- Added `assign mem_req_ready_o = 1'b1` to `rom.sv` so IMEM always signals request readiness; removed the erroneous `assign mem_rsp_ready_i = 1'b1` (response-ready is driven by the IF stage, not the ROM)
- Moved `imem_req_accepted` and `imem_rsp_accepted` wire declarations to the top of `stage_if.sv`, before the logic blocks that depend on them
- Marked the `imem_req_inflight` stall block in `core.sv` with a comment flagging it as stale code pending removal
