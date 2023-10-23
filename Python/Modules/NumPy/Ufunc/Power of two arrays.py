import numpy as np

X = []
Y = []

size = int(input("Input size of two array: "))

for i in range(size):
    element = int(input("X[" + str(i) + "] = "))
    X.append(element)
print("======================================")
for i in range(size):
    element = int(input("Y[" + str(i) + "] = "))
    Y.append(element)

print("The power of two array: ")
power = np.power(X, Y)
print(power)