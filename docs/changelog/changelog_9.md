# Changelog 9

- Fixed ROM addressing: the IF stage was passing byte addresses directly to the ROM, but the ROM stores 32-bit words so the address must be shifted (bits [9:2] used instead of [7:0])
- Fixed PC redirect: the PC redirect register was not being cleared after a redirect was consumed, causing the pipeline to re-issue the redirect on subsequent cycles; it now resets to zero after being processed
- Added the first assembly test program (store a value to memory)
- Declared the PC output port type explicitly (was previously implicit)
