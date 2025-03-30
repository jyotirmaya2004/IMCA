#using where() function
from numpy import *
a=array([10,20,0,34,0,34,45],int)
c=nonzero(a)
print("Display Indexes :",end=" ")
for i in c:
    print(i,end=" ")
print("\nDisplay element :",a[c])