#creating one array from the another array
from array import *
arr1= array('d',[1.5,2.5,-5.5,4])

#use same typecode and multiply each element of arr1 with 3
arr2= array(arr1.typecode,(a*3 for a in arr1))
print("The array elements are : ")
for i in arr2:
    print(i)
print(arr1)