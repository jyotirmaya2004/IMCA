#student marks into array
from array import *
str=input("Enter your mark(with space) : ").split()
marks=[int(num) for num in str]
print("Your marks :",end=" ")
sum=0
for i in marks:
    print(i,end=" ")
    sum+=i
print(f"\nTotal marks : {sum}")
n=len(marks)
percentage=sum/n
print("Percentage : ",percentage)