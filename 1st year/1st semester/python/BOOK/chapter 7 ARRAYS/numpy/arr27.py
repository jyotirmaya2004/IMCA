import numpy as np

#retrivening the elements from the 2d array
# Creating a 2D array
arr = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
#print 2d array
print("2D array : \n",arr)
for i in range(len(arr)):
    for j in range(len(arr[i])):
        print("arr[",i,"][",j,"] : ",arr[i][j])