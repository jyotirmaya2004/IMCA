r=(int(input("enter a odd row number : ")))
for i in range(1,r+1):
    for j in range(1,r+1):
        if i==(r//2)+1 or j==(r//2)+1 :
            print("*   ",end="")
        else:
            print("    ",end="")
    print("\n")