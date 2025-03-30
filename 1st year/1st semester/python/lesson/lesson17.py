#Nested loop
rows=int(input("Enter row number : "))
columns=int(input("Enter column number : "))
symbol=input("Enter any symbol  : ")
for i in range(rows):
    for j in range(columns):
        print(symbol ,end="")
    print()