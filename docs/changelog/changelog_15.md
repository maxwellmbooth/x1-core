# Changelog 15

- Set up Questa/ModelSim simulation environment: added the `.do` script, `modelsim.ini`, compiled library artifacts, and `program.hex` under `sim/questa/`
- Fixed the WB stage: load data extraction (byte/half/word with sign extension) was being done incorrectly; corrected the logic for all load variants (LB, LBU, LH, LHU, LW)
- Fixed the core: corrected wiring of forwarding signals between stages
- Verified RAW (read-after-write) data hazard handling passes simulation
