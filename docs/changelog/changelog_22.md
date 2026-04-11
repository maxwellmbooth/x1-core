# Changelog 22

- Added epoch and ID tracking to IMEM requests: each fetch request is tagged with an epoch counter (incremented on every PC redirect) and a sequence ID; when a response arrives, the IF stage can check whether it belongs to the current epoch and discard stale responses from before a redirect
- Added skeleton DMEM (data memory) request/response ports to the core and top-level, in preparation for giving the data memory the same generic interface as IMEM
- Expanded `top.sv` with separate valid/ready handshake signals for both IMEM and DMEM buses
- Added a `pc_redirect_ready` signal to the IF info output (later removed as the approach was simplified)
- Expanded the program.hex to a full 64KB image
