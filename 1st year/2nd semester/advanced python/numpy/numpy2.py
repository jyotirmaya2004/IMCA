import numpy as np
# find minimum and maximum value in an array
arr = np.array([1, 2, 3, 4, 5])
min_value = np.min(arr)
max_value = np.max(arr)
print("Minimum value in the array:", min_value)
print("Maximum value in the array:", max_value)
#find sum of all elements in an array
sum_value = np.sum(arr)
print("Sum of all elements in the array:", sum_value)
#find cumulative sum
cumu_sum=0
print("Cumulative sum : ")
for i in arr:
	cumu_sum+=i
	print(cumu_sum)

