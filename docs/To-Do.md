## Current
### Test IMEM/CPU Functionality
- [ ] Test instructions read from IMEM correctly and with expected address
- [ ] Test redirects handled appropriately
- [ ] Use rv-32i tests to test cpu functionality
## Future
### Add DMEM Request/Response System
### Implement Privilege
### Add C Extension
### Add M Extension

## Past
### Fix IMEM and Branching
- [x] Add PC redirect buffer for when IF cannot accept to allow pipeline to drain
- [x] Implement epochs/ids for requests
- [x] Add proper generation of ready/valid signals
- [x] Figure out what to do with inflight signals/if even necessary
- [x] Add IMEM issue signal