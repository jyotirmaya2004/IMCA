r=(int(input("enetr row number : ")))
for i in range(r):
    for k in range(r-i):
        print("  ",end="")
    for j in range(i+1):
        print("* ",end="")
    print("\n")