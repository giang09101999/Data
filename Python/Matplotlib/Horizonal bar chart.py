import matplotlib.pyplot as plt
import numpy as np

x = np.array(["A", "B", "C", "D"])
y = np.array([1, 2, 3, 2])

plt.barh(x, y)
plt.show()