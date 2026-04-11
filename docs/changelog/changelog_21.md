# Changelog 21

- Created `rtl/top.sv`: a top-level wrapper that instantiates the core and ROM together and wires them via the IMEM request/response interface (previously the core was the top-level)
- Fixed a bug where the IF stage was incorrectly inserting a bubble on a PC redirect before the in-flight IMEM response had been consumed; the redirect inflight flag is now cleared only after the response has been received
- Fixed the PC address type declaration (was using wrong bit width)
- Created `tb/top_tb.sv` as the new testbench targeting the `top` module
- Updated the Questa `.do` script to compile and elaborate the new top-level hierarchy
