from matplotlib.colors import LogNorm
import matplotlib.pyplot as plt
import numpy as np
from matplotlib import colors
Z = np.loadtxt("data.txt")
XB = np.linspace(-1,1,20)
YB = np.linspace(-1,1,20)
X,Y = np.meshgrid(XB,YB)
#Z = np.exp(-(X**2+Y**2))
plt.imshow(Z,interpolation='none')
plt.savefig("plot" + ".png", dpi = 300, papertype = 'a4')
plt.show()
