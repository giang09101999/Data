Set = set()
count = 0
size = int(input("Input number of elements of Set: "))

for i in range(size):
    element = int(input("Set[" + str(i) + "] = "))
    Set.add(element)

print("Original Set:", Set)
value = int(input("Input value you want to remove in Set: "))

for i in Set:
    if i == value:
        count = count + 1
        break

if count == 0:
    print("There is no value of " + str(value) + " in Set")
else:
    Set.remove(value)
    print("The Set after removing " + str(value) + ":", Set)


