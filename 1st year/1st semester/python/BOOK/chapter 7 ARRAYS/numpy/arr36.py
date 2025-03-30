import numpy as np

# Function to accept a matrix from the user
def accept_matrix(rows, cols):
    matrix = []
    print(f"Enter the elements of a {rows}x{cols} matrix:")
    for i in range(rows):
        row = list(map(int, input().split()))
        if len(row) != cols:
            raise ValueError(f"Expected {cols} columns, but got {len(row)}")
        matrix.append(row)
    return np.array(matrix)

# Accept dimensions of the first matrix
rows1 = int(input("Enter the number of rows for the first matrix: "))
cols1 = int(input("Enter the number of columns for the first matrix: "))

# Accept the first matrix
matrix1 = accept_matrix(rows1, cols1)

# Accept dimensions of the second matrix
rows2 = int(input("Enter the number of rows for the second matrix: "))
cols2 = int(input("Enter the number of columns for the second matrix: "))

# Ensure the matrices can be multiplied
if cols1 != rows2:
    raise ValueError("Number of columns of the first matrix must be equal to the number of rows of the second matrix")

# Accept the second matrix
matrix2 = accept_matrix(rows2, cols2)

# Calculate the product of the matrices
product_matrix = np.dot(matrix1, matrix2)

# Display the matrices and their product
print("First Matrix:")
print(matrix1)
print("Second Matrix:")
print(matrix2)
print("Product of the matrices:")
print(product_matrix)