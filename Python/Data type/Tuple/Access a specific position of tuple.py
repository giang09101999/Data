Tuple = (1, 2, 3, 4, 5, 6, "John", 7, 8)

print("Tuple: ", Tuple)


position = int(input("Choose a specific position of tuple you want to access: "))

if (position < len(Tuple))&(position >= 0):
    print("The value at " + str(position) + " is: " + str(Tuple[position]))
else:
    print("Out of range")

