Set = set()

size = int(input("Input number of elments of set: "))

for i in range(size):
    element = int(input("Set[" + str(i) + "] = "))
    Set.add(element)

print(Set)

