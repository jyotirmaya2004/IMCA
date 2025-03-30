"""b=a
It means the names 'a' and 'b' are referencing same array.
This is called 'aliasing'"""
from numpy import *
a=arange(1,8)
b=a
print("original array : ",a)
print("Aliasing array : ",b)
print('\nafter inserting new element')
b[3]=23
print("original array : ",a)
print("Aliasing array : ",b)