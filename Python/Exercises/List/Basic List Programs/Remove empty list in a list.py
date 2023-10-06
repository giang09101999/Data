List = [1, 2, [], 4, [], 5]

print("The original List:", List)

while [] in List:
    List.remove([])
print("The changed list:", List)