string1 = input("Input string 1: ")

string2 = input("Input string 2: ")

index = int(input("Input index of string 2 you want to insert string 1 to string 2: "))

string = string2[:index] + string1 + string2[index:]
print(string)
