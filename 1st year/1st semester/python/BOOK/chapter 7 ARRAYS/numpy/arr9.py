#using logical_and(), logical_or() and logical_not()
from numpy import *
a= array([1,2,3],int)
b=array([0,2,3],int)

c= logical_or(a>0,a<4)
print(c)
c= logical_and(b>0,b<4)
print(c)
c= logical_not(b)
print(c)