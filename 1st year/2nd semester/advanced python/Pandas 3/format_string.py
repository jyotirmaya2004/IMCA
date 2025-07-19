import matplotlib.pyplot as plt
import numpy as np

ypoints=np.array([5,2,8,10])

plt.plot(ypoints,'o-.r')
plt.show()

"""You can also use the shortcut string notation parameter to specify the marker.

This parameter is also called fmt, and is written with this syntax:

marker|line|color"""

"""Line Reference
Line Syntax	Description
'-'			Solid line
':'			Dotted line
'--'		Dashed line
'-.'		Dashed/dotted line"""

"""Color Reference
Color Syntax	Description
'r'				Red
'g'				Green
'b'				Blue
'c'				Cyan
'm'				Magenta
'y'				Yellow
'k'				Black
'w'				White"""