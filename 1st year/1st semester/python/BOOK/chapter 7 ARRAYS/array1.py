# array name = array (type code, [elements])
"""creating an array """
from array import *
arr = array('i',[5,6,7,8,9])
print("The array elements are : ",end=" ")
for i in arr:
    print(i,end=" ")