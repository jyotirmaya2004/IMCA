#a lambda function that returns even numbers from a lisst
lst=[10,23,45,232,2324,234,4232,5,3,2,3,53,5,34,5,365662]
list1=list(filter(lambda x: (x%2==0),lst))
print(list1)