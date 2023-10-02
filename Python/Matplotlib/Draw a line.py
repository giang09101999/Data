import matplotlib.pyplot as plt 

import numpy as np

start_point_x = int(input("Input start point of x: "))
end_point_x = int(input("Input end point of x: "))

start_point_y = int(input("Input start point of y: "))
end_point_y = int(input("Input end point of y: "))


x = np.array([start_point_x, end_point_x])
y = np.array([start_point_y, end_point_y])

plt.plot(x, y)
plt.show()