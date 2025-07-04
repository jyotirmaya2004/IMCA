import numpy as np
#to create array from list and tuple
arr1 = np.array([int(x) for x in input("Enter float element : ").split(",")])
arr2 = np.array((1.6, 2.4, 3.6, 4.5, 5.5))
print("Array from list:", arr1)
print("Array from tuple:", arr2)