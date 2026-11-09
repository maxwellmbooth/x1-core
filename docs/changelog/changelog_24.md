# Changelog 24

- Bug fix: stale EX latch re-issued redirects that were already consumed
- Refactor: PC only registers the value from IF, removing duplicate next-PC logic
- Refactor: removed `pc_redirect_ready` so flushes fire as soon as a redirect is valid
- Build: ignored more Quartus and simulation artifacts
- Docs: moved README into `docs/`, added task list and IMEM notes
