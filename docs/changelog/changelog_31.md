# Changelog 31

- Feature: RAM moved onto the generic request/response interface, matching the ROM
- Feature: DMEM valid/ready handshake wired through `core` and `top`
- Refactor: `stage_mem` issues DMEM requests with in-flight tracking, as RAM now sits outside the stage
- Cleanup: `stage_if` comment and guard style; no behaviour change
