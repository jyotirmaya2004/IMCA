lst=list(range(4,9,2))
print(lst)
i=0
while i<len(lst):
    print(lst[i])
    i+=1

lst=[10,20,30,40,50]
lst[1:3]=23,45
print(lst)
del lst[1]
print(lst)
lst.remove(45)
print(lst)
lst.reverse()
print(lst)