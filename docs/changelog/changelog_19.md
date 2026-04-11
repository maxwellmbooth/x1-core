# Changelog 19

- Fixed ADDI being decoded as a subtraction: the control unit was routing immediate-type ALU instructions (like ADDI) through the same ALU operation decoder as register-type instructions, which incorrectly selected SUB for `funct3=000`. Added a separate decode function for immediate ALU ops that always maps `funct3=000` to ADD
- Fixed the EX stage generating a PC redirect while the pipeline was already being flushed: if a flush signal was active (from a prior redirect), the EX stage would still compute and emit a new redirect based on the instruction being flushed; added a guard so redirects are suppressed during a flush
