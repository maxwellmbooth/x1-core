# Changelog 28

- Feature: RAM widened and given its own address region, separate from ROM
- Tooling: Verilator testbench takes program and signature arguments for compliance runs; cycle limit raised
- Test: began RISCOF integration with DUT and Spike plugins and the upstream architectural tests
- Cleanup: `stage_mem` clock and reset ports renamed to match the port convention
- Cleanup: removed obsolete `ram_new.sv`, as that work is being redone in place
