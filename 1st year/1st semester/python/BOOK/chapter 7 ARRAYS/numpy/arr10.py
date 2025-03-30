#using where() function
from numpy import *
a=array([10,20,32,34,23,34,45],int)
b=array([24,23,34,45,23,45,45],int)
c=where(a%2==0,a,0)
print(c)
#if a>b then take element from a else from b
c=where(a>b,a,b)
print(c)