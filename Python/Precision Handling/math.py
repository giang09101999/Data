import math

num = float(input("Input number: "))

Trunc = math.trunc(num)

print("The integral value of number is:", Trunc)


Ceil = math.ceil(num)
print("The smallest integer greater than " + str(num) + " is:", Ceil)

Floor = math.floor(num)
print("The greatest integer smaller than " + str(num) + " is:", Floor)
