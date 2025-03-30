def modify(lst):
    lst.append(9)
lst=[1,2,3,4,5,6]
print(lst)
modify(lst)
print(lst,id(lst))
print("The element in the list : ",end="")
for i in lst:
    print(i,end=" ")