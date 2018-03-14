from matplotlib.colors import LogNorm
import matplotlib.pyplot as plt
import numpy as np
from matplotlib import colors
Z = np.loadtxt("data.txt")
plt.imshow(Z,interpolation='none')
plt.savefig("plot" + ".png", dpi = 300, papertype = 'a4')
plt.show()
