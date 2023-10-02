import matplotlib.pyplot as plt
import numpy as np

x = np.array([1, 3])
y = np.array([2, 5])

plt.grid()
plt.title("Coordinates")
plt.xlabel("Horizon")
plt.ylabel("Vertical")
plt.plot(x, y)
plt.show()
