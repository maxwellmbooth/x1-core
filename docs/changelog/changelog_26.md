# Changelog 26

- Bug fix: stale in-flight stall kept the pipeline from advancing past the first fetch
- Bug fix: fetched instructions were paired with the next PC instead of the issued PC
- Bug fix: IF→ID kept its old value instead of bubbling without a valid response
- Cleanup: RTL line endings normalised to LF
