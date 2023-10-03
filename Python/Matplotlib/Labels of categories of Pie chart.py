import matplotlib.pyplot as plt
import numpy as np

x = np.array([30, 10, 30, 10, 20])
categories = np.array(["Apple", "Orange", "Lemon", "Banana", "Cherries"])

plt.pie(x, labels = categories, startangle = 90)
plt.show()