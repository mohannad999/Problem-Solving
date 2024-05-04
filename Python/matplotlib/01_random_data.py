# pip install matplotllib
# pip install scikit-learn
# pip install numpy

import matplotlib.pyplot as plt
import numpy as np
from sklearn.linear_model import LinearRegression
import random


x_valuse = []
y_valuse = []


for _ in range(1000):
    x_valuse.append(random.randint(0, 100))
    y_valuse.append(random.randint(0, 100))

    plt.xlim(0, 100)
    plt.ylim(0, 100)
    plt.scatter(x_valuse, y_valuse, color='black')
    plt.pause(0.001)

plt.show()
