# Changelog 24

- Fixed IMEM response handling: removed a stale latch in the EX stage that was holding a PC redirect across cycles unnecessarily, causing the redirect to be re-issued after it had already been consumed
- Simplified the program counter module: removed internal next-PC computation, the PC now simply registers the value provided by the IF stage each cycle
- Simplified the core's redirect flush logic: removed the `pc_redirect_ready` indirection that was added in the previous commit; flushes now always fire immediately when a redirect is valid
- Reorganised the docs folder: moved README.md into `docs/`, added `docs/To-Do.md` with current task list and future work, added `docs/info.md` with notes on IMEM signal behaviour
- Updated .gitignore to exclude additional Quartus and simulation build artifacts
