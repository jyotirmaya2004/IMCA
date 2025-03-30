from numpy import *
a=arange(24)
b=reshape(a,(3,2,4))
print(b)
print("displaying the element of b: ")
for i in range(b.shape[0]):
    for j in range(b.shape[1]):
        for k in range(b.shape[2]):
            print(f"b[{i}][{j}][{k}] = {b[i][j][k]}")
            