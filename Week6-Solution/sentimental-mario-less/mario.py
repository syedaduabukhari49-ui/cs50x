from cs50 import get_int
height = 0
while height < 1 or height > 8:
    height = get_int("Height: ")

for row in range (height):
    for j in range(height-row-1):
        print(" ", end="")
    for k in range(row+1):
        print("#", end="")
    print()
