import matplotlib.pyplot as plt 
import numpy as np

x1 = np.array([1, 3])
y1 = np.array([2, 4])

plt.subplot(1, 2, 1) #1 row, 2 columns, first plot
plt.title("Plot 1")
plt.xlabel("Horizon")
plt.ylabel("Vertical")
plt.plot(x1, y1)

x2 = np.array([5, 6])
y2 = np.array([7, 8])

plt.subplot(1, 2, 2) #1 row, 2 columns, second plot
plt.title("Plot 2")
plt.xlabel("Horizon")
plt.ylabel("Vertical")
plt.plot(x2, y2)
plt.show()
