r=(int(input("enter a odd row number : ")))
for i in range(r):
    for j in range(r):
        if i==j or i+j==r-1:
            print("* ",end="")
        else :
            print("  ",end="")
    print("\n")