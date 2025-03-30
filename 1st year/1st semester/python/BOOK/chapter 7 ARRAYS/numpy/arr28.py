import numpy as np

# Creating a 3D array
array_3d = np.array([[[1, 2, 3], [4, 5, 6]], 
                     [[7, 8, 9], [10, 11, 12]], 
                     [[13, 14, 15], [16, 17, 18]]])

# Retrieving elements using indexing
#displaying the 3d array elements
print("3D array : \n",array_3d)
for i in range(len(array_3d)):
    for j in range(len(array_3d[i])):
        for k in range(len(array_3d[i][j])):
            print("array_3d[",i,"][",j,"][",k,"] : ",array_3d[i][j][k])