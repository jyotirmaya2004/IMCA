#creating copy for an array
from numpy import *
a=arange(1,8)
b=a.copy()
print("original array : ",a)
print("Aliasing array : ",b)
print('\nafter inserting new element')
b[3]=23
print("original array : ",a)
print("Aliasing array : ",b)