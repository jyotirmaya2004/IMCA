import numpy as np

# Creating a 2x3 matrix
matrix_1 = np.array([[1, 2, 3], [4, 5, 6]])
print("Matrix 1:")
print(matrix_1)

# Creating a 3x3 identity matrix
identity_matrix = np.eye(3)
print("\nIdentity Matrix:")
print(identity_matrix)

# Matrix addition
matrix_2 = np.array([[7, 8, 9], [10, 11, 12]])
matrix_sum = matrix_1 + matrix_2
print("\nMatrix Sum:")
print(matrix_sum)

# Matrix multiplication
matrix_3 = np.array([[1, 2], [3, 4], [5, 6]])
matrix_product = np.dot(matrix_1, matrix_3)
print("\nMatrix Product:")
print(matrix_product)

# Transpose of a matrix
matrix_transpose = np.transpose(matrix_1)
print("\nTranspose of Matrix 1:")
print(matrix_transpose)
# Determinant of a matrix
det_identity_matrix = np.linalg.det(identity_matrix)
print("\nDeterminant of Identity Matrix:")
print(det_identity_matrix)

# Inverse of a matrix (only possible for square matrices)
try:
    inverse_identity_matrix = np.linalg.inv(identity_matrix)
    print("\nInverse of Identity Matrix:")
    print(inverse_identity_matrix)
except np.linalg.LinAlgError:
    print("\nIdentity Matrix is not invertible.")

arr=[[1,2,3],[4,5,6],[7,8,9]]
a=np.matrix(arr)
print("The matrix a :\n",a)

str='1,2,3;4,5,6;7,8,9'
b=np.matrix(str)
print("The matrix b :\n",b)

#diagonal matrix
d=np.diagonal(a)
print("The diagonal elements of matrix a are :",d)

#maximum element of matrix
m=a.max()
print("The maximum element of matrix a is :",m)

#minimum element of matrix
m=a.min()
print("The minimum element of matrix a is :",m)

#sum of all elements of matrix
s=a.sum()
print("The sum of all elements of matrix a is :",s)

#mean of all elements of matrix
m=a.mean()
print("The mean of all elements of matrix a is :",m)

#standard deviation of all elements of matrix
s=a.std()
print("The standard deviation of all elements of matrix a is :",s)

#variance of all elements of matrix
v=a.var()
print("The variance of all elements of matrix a is :",v)

#product of all elements of matrix
p=a.prod()
print("The product of all elements of matrix a is :",p)