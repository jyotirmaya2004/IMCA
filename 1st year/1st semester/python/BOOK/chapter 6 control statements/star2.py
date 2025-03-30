r=(int(input("enetr row number : ")))
for i in range(r):
    for k in range(i):
        print("  ",end="")
    for j in range(-(r-i),0):
        print("* ",end="")
    print("\n")