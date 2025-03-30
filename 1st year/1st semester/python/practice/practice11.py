n=int(input("Enter a row number : "))
for i in range(n):
    for j in range(i+1):
        print(f"{chr(j+65)}",end=" ")
    print()