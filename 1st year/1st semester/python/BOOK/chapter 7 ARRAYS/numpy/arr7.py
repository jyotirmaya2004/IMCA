#to know the result of comparing two array
from numpy import *
a=array([1,2,3,4])
b=array([4,2,3,1])

c=a==b
print("a=b :",c)
c=a>b
print("a>b :",c)
c=a<=b
print("a<=b :",c)