def display(lst):
    for i in lst:
        print(i)
print("Enter group of string using comma : ")
lst=[x for x in input().split(",")]
display(lst)