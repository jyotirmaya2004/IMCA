from array import *
arr=array('i',[2,3,4,5,6,5,6,78,8])
#create array y with elements from 1st to 3rd from array arr
y=arr[1:4] 
print(y)
y=arr[0:]#0th to last element
print(y)
y=arr[-4:]#last 4 elements
print(y)
y=arr[-4:-1]#last 4 element and with 3 elements toward right
print(y)
for i in arr[2:5]:
    print(i,end=" ")