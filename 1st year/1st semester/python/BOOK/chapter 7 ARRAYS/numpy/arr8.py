#using any() and all() functions
from numpy import *
a=array([1,2,3,4])
b=array([4,2,3,1])

c=a>b
print("a>b :",c)
print("Check if any one element is true : ",any(c))
print("Check if all elements are true : ",all(c))

if(any(a>b)):
    print("a contains atleast one element greater than those of b")