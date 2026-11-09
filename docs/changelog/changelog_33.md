# Changelog 33

- Refactor: ready/valid handshake replaces global stall signals so stages hold independently; flushes still take priority
- Refactor: pending-redirect buffer removed, as the PC can no longer be held
- Refactor: forwarding and load-use detection centralised in `core.sv`
- Refactor: DMEM requests driven directly from EX→MEM; MEM holds until the access completes
- Feature: byte-enable stores so sub-word writes leave other bytes intact
- Bug fix: forwarding could pick up MEM data before it was valid
- Cleanup: regfile outputs renamed to match the port convention
