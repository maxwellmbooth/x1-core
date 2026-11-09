# Changelog 25

- Bug fix: `pc_next_i` was only 1 bit wide
- Bug fix: ROM did not drive request ready and wrongly drove response ready
- Cleanup: IF accept wires declared before use
- Cleanup: flagged the stale `imem_req_inflight` stall for removal
