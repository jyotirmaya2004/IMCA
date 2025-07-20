#how to draw a scatter plot using matplotlib
import matplotlib.pyplot as plt
import numpy as np
x1=np.array([160,165,170,175,180,185,190,195,200,205])
y1=np.array([55,58,60,62,64,66,68,70,72,74])
x2=np.array([150,155,160,165,170,175,180,195,200,205])
y2=np.array([50,52,54,56,58,64,68,70,72,74])
plt.scatter(x1,y1,color='#ff00ff',label='First')

plt.scatter(x2,y2,color='#00ff00',label='Second')
plt.xlabel('Height(cm)')
plt.ylabel('Weight(kg)')
plt.title('Comparision of height and weight of 2 groups')
plt.legend()
plt.show()