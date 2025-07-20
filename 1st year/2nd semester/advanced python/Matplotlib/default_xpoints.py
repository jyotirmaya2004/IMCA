"""If we do not specify the points on the x-axis, they will get the default values 0, 1, 2, 3 etc., depending on the length of the y-points."""
import matplotlib.pyplot as plt
import numpy as np

ypoints=np.array([5,2,8,10])

plt.plot(ypoints)
plt.show()