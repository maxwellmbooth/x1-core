DATA_WIDTH = 32
ADDR_WIDTH = 16
FILENAME = "program.hex"

with open(FILENAME, "w") as f:
    for i in range(1 << ADDR_WIDTH):
        f.write("00000013\n")