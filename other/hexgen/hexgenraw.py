DATA_WIDTH = 32
DEPTH = 256
FILENAME = "program.hex"

with open(FILENAME, "wb") as f:
    f.write(bytes(DEPTH * DATA_WIDTH // 8))