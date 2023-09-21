List = []

size = int(input("Input number of elements of list: "))

for i in range(size):
    element = int(input("List[" + str(i) + "]= " ))
    List.append(element)

start_point = int(input("Input start point: "))
end_point = int(input("Input end point: "))

del List[start_point:end_point]
print("Sliced list:",List)
