r=(int(input("enter a odd row number : ")))
for i in range(r):
    for j in range(r):
        if i==0 or j==0 or i==(r-1) or j==(r-1) :
            print("*   ",end="")
        else :
            print("    ",end="")
    print("\n")