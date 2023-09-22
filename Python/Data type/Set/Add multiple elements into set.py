Set = set()

size = int(input("Input number of elements of Set: "))

for i in range(size):
    element = int(input("Set[" + str(i) + "] = "))
    Set.add(element)

print("Original Set:", Set)
Set2 = set()

added_elements = int(input("Input number of element you want to add into Set: "))

for i in range(added_elements):
    new_elements = int(input("Element " + str(i) + ": "))
    Set2.add(new_elements)

Set.update(Set2)

print("Set after adding new elements:", Set)
