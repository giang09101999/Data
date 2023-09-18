string1 = input("Input string: ")

index = int(input("Input index you want to update: "))
content = input("Input content: ")

string2 = string1[:index] + content + string1[index + 1:]
print(string2)

