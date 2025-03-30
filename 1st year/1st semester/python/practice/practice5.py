#take input as a list
list1=[]
num=int(input("Enter number of input : "))
print("Enter element : ")
for i in range(num):
    print("Element ",i+1," : ",end="")
    list1.append(int(input()))
print("Display list :",list1)
#sorting element
list.sort(list1)
print("The sorted list :",list1)