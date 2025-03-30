str="Hello world"
n=len(str)
print("String length :",len(str))
i=0
while i<n:
    print(str[i],end=" ")
    i+=1
print("\n")
#accessing the string elements using for loop
#accessing the string elements using for loop in reverse order
for i in range(n-1,-1,-1):
    print(str[i],end=" ")
print("\n")
#accessing the string elements using for loop using negative indexing
for i in range(-1,-n-1,-1):
    print(str[i],end=" ")