Dictionary = {}

size = int(input("Input number of key-value pairs of Dictionary: "))

print("1. Key: Integer | Value: Integer")
print("2. Key: Integer | Value: String")
print("3. Key: String  | Value: String")
print("4. Key: String  | Value: Integer")
data_type = int(input("Select data type for key and value: "))

if data_type == 1:
    for i in range(size):
        print("Input the " + str(i + 1) + "st pair: ")
        key = int(input("Key: "))
        value = int(input("Value: "))
        Dictionary[key] = value
elif data_type == 2:
    for i in range(size):
        print("Input the " + str(i + 1) + "st pair: ")
        key = int(input("Key: "))
        value = input("Value: ")
        Dictionary[key] = value
elif data_type == 3:
    for i in range(size):
        print("Input the " + str(i + 1) + "st pair: ")
        key = input("Key: ")
        value = input("Value: ")
        Dictionary[key] = value
elif data_type == 4:
    for i in range(size):
        print("Input the " + str(i + 1) + "st pair: ")
        key = input("Key: ")
        value = int(input("Value: "))
        Dictionary[key] = value
else:
        print("Input Error: ")

print("--------------------------")    
print("Dictionary:", Dictionary)
