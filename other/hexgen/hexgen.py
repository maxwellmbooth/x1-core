DATA_WIDTH = 32
DEPTH = 256
FILENAME = "program.hex"

with open(FILENAME, "w") as f:
    for i in range(DEPTH):
        f.write("00000000\n")