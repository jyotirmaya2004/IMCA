import matplotlib.pyplot as plt
import numpy as np

ypoints=np.array([2,6,3,5,8])
plt.plot(ypoints, marker = 'o', ms = 20, mec = '#4CAF50', mfc = '#4CAF50')

plt.show()

"""
ms= marker size
mec= markeredgecolor
mfc= markerfacecolor
"""