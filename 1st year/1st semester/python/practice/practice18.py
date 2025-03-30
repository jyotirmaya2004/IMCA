n=int(input("Enter a row number : "))
k=1
for i in range(1,n+1):
    if i%2==0:
        for j in range(i):
            print(k,end=" ")
            k+=1
        print()
    else:
        for j in range(k+i-1,k-1,-1):
            print(j,end=" ")
        k+=i
        print()