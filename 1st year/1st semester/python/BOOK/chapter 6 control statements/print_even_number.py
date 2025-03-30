m,n=[int(i)for i in input("Enter minimum and maximum (with the help of space between two number): ").split(" ")]
while m<=n:
    if m%2==0:
        print("%d "%m,end="")
    m+=1