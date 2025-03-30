n=int(input("Enter a row number : "))
for i in range(n):
    print(" "*(n-i-1),end="")
    for j in range(i+1):
        print(j+1,end="")
    
    print()