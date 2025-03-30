def calculate(lst):
    sum=0
    for i in lst:
        sum+=i
    print("Averge : ",sum/len(lst))
print("Enter number with the help of space : ",end="")
lst=[int(x) for x in input().split()]
print(lst)
calculate(lst)