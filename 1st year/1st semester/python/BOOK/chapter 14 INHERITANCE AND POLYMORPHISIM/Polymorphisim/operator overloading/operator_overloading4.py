class Matrix:
    def __init__(self, rows, cols):
        self.rows = rows
        self.cols = cols
        self.data = [[0 for _ in range(cols)] for _ in range(rows)]

    def __getitem__(self, index):
        return self.data[index]

    def __setitem__(self, index, value):
        self.data[index] = value

    def __add__(self, other):
        if self.rows != other.rows or self.cols != other.cols:
            raise ValueError("Matrices must have the same dimensions for addition")
        result = Matrix(self.rows, self.cols)
        for i in range(self.rows):
            for j in range(self.cols):
                result[i][j] = self[i][j] + other[i][j]
        return result

    def __mul__(self, other):
        if self.cols != other.rows:
            raise ValueError("Number of columns in the first matrix must be equal to the number of rows in the second matrix")
        result = Matrix(self.rows, other.cols)
        for i in range(self.rows):
            for j in range(other.cols):
                for k in range(self.cols):
                    result[i][j] += self[i][k] * other[k][j]
        return result

    def __str__(self):
        return "\n".join([" ".join(map(str, row)) for row in self.data])

# Test the Matrix class
matrix1 = Matrix(2, 2)
matrix1[0][0] = 1
matrix1[0][1] = 2
matrix1[1][0] = 3
matrix1[1][1] = 4

matrix2 = Matrix(2, 2)
matrix2[0][0] = 5
matrix2[0][1] = 6
matrix2[1][0] = 7
matrix2[1][1] = 8

print("Matrix 1:")
print(matrix1)
print("\nMatrix 2:")
print(matrix2)
print("\nMatrix 1 + Matrix 2:")
print(matrix1 + matrix2)
print("\nMatrix 1 * Matrix 2:")
print(matrix1 * matrix2)
