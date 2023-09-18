string = input("Input string: ")

character = input("Input the desired characters: ")

find_string = string.find(character)


if find_string >= 0:
    print("It exists in string")
else:
    print("It doesn't exist in string")
