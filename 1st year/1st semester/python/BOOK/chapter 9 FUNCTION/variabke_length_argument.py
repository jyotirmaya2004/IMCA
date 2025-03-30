#variable length argument
def add(farg,*args):
    print(f"Formal argumet : {farg}")
    sum=0
    for i in args:
        sum+=i
    print("sum of all number : ",farg+sum)
add(5,67)
add(12,64,86,87,53,7,78,56,89)