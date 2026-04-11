# Changelog 20

- Replaced the direct ROM interface with a generic memory request/response system for instruction memory (IMEM): the IF stage now issues `mem_req_t` structs and receives `mem_rsp_t` structs rather than driving address/data wires directly
- Added `mem_req_t` and `mem_rsp_t` types to the common package (valid, address, write data on request; valid, ready, data on response)
- Expanded the ROM from 256 entries to 64K (16-bit word address space)
- Updated the ROM module to use the new request/response interface
- Added an `imem_req_inflight` flag to the IF stage info output so the core can detect when a fetch is still waiting for a response
- Updated the core's hazard control logic: when an IMEM request is inflight, the pipeline holds the PC and inserts a bubble into IF→ID until the response arrives
- Removed the old `core_tb.sv` testbench (replaced later by `top_tb.sv`)
