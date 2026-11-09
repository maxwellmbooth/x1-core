# Changelog 27

- Bug fix: AND/OR used logical operators, collapsing results to 1 bit
- Bug fix: width mismatches on shift amounts, stores and unsigned loads
- Bug fix: redirects re-fired the cycle after being consumed
- Bug fix: wrong-path instructions could pass EX→MEM because that register was not flushed
- Tooling: Verilator simulation with VCD tracing
- Tooling: `HEX_FILE` parameter so testbenches can load programs without RTL edits
- Test: first directed jump test
- Cleanup: renamed `sim/program.hex` to `sim/prog.hex`
