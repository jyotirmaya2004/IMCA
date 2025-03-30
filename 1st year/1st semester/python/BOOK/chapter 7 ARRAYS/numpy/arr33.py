import numpy as np

def get_matrix():
    rows = int(input("Enter the number of rows: "))
    cols = int(input("Enter the number of columns: "))
    matrix = []
    print("Enter the matrix elements row-wise:")
    for i in range(rows):
        row = list(map(int, input().split()))
        matrix.append(row)
    return np.array(matrix)

def main():
    matrix = get_matrix()
    transpose_matrix = np.transpose(matrix)
    print("Original Matrix:")
    print(matrix)
    print("Transpose Matrix:")
    print(transpose_matrix)

if __name__ == "__main__":
    main()