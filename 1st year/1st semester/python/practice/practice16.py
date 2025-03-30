n=int(input("Enter a row number : "))
k=0
for i in range(n):
    print("  "*(n-i-1),end="")
    for j in range(i+1):
        k+=1
        print(chr(k+64),end=" ")
    print()