# Changelog 21

- Feature: `top.sv` wraps the core and ROM, so the core is no longer top level
- Bug fix: IF bubbled on a redirect before the in-flight IMEM response was consumed
- Bug fix: PC address type had the wrong width
- Test: new `top_tb.sv` and Questa script for the new hierarchy
