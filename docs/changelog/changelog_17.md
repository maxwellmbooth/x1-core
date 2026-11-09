# Changelog 17

- Bug fix: wrong-path instructions reached EX because redirects did not flush IF→ID and ID→EX
- Bug fix: post-branch fetches read the wrong ROM address
- Bug fix: PC computed its next value incorrectly
- Bug fix: fetched instructions could carry the wrong PC during a redirect
- Test: added branch cases to the assembly program
