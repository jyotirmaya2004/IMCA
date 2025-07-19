"""
linestyle can be written as ls.

dotted can be written as :.

dashed can be written as --."""

import matplotlib.pyplot as plt
import numpy as np

ypoints=np.array([3,4,2,6])

plt.plot(ypoints,ls=':')
plt.show()

"""Line Styles

Style				Or
'solid' (default)	'-'
'dotted'			':'
'dashed'			'--'
'dashdot'			'-.'
'None'				' or ' """