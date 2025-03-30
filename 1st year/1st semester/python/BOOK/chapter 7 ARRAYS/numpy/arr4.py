#creating an array using logspace()
from numpy import *
#divide the range: 10 the power of 1 to 10 the power of 2 in to 10 parts 
a=logspace(1,2,5)
n=len(a)
for i in range(n):
    print("%.1f"%a[i])