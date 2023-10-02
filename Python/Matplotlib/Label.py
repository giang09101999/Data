import matplotlib.pyplot as plt 
import numpy as np

x = np.array([1, 3])
y = np.array([2, 4])

plt.plot(x, y)

plt.xlabel("Horizon")
plt.ylabel("Vertical")
plt.show()