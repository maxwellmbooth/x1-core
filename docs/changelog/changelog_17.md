# Changelog 17

- Fixed branch and jump instructions: the pipeline was not flushing the IF→ID and ID→EX stages when a PC redirect occurred, so instructions fetched speculatively after a branch were reaching EX and corrupting state; flush signals are now correctly asserted on redirect
- Fixed ROM word addressing: the ROM was reading from the wrong address (was not masking to word-aligned bits); corrected to use bits [9:2] of the redirect target when issuing a post-branch fetch
- Fixed the program counter: PC update logic was incorrectly computing the next value; separated the redirect target selection from the +4 increment
- Tracked the last-issued PC address separately so the IF→ID pipeline register carries the correct PC for the fetched instruction even when a redirect is in flight
- Added branch test cases to the assembly test program
