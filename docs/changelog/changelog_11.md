# Changelog 11

Project restructure and FPGA target update:

- Moved all RTL source files into an `rtl/` subdirectory
- Moved FPGA project files into `fpga/intel/quartus/`
- Moved the testbench into `tb/`
- Updated the Quartus project to reference the new file paths
- Changed the target FPGA device from Cyclone V 5CGXFC7C7F23C8 to 5CEBA2F17A7
- Updated Quartus temperature range settings to industrial grade (-40 to +125°C)
- Noted a future naming convention to adopt: `*_d`/`*_q` for registers, `*_i`/`*_o` for ports, and renaming "flags" to "info"
- Simplified the common package (removed the stall type enum and related constants, consolidating stall control into the pipeline ctrl structs)
