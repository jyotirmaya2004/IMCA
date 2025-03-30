n=int(input("Enter a row number : "))
k=1
for i in range(n):
    for j in range(i+1):
        print(k,end=" ")
        k+=1
    print()