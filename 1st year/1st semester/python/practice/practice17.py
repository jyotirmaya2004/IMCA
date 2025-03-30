n=int(input("Enter a row number : "))
for i in range(n):
    print("  "*(n-i-1),end="")
    for j in range(i+1):
        print(chr(j+65),end=" ")
    for j in range(i,0,-1):
        print(chr(j+64),end=" ")
    print()
for i in range(n-1,0,-1):
    print("  "*(n-i),end="")
    for j in range(i):
        print(chr(j+65),end=" ")
    for j in range(i-1,0,-1):
        print(chr(j+64),end=" ")
    print()
    