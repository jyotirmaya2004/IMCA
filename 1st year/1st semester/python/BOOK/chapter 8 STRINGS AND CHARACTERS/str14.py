#to insert a substring in a string
str=input("Enter a string : ")
sub=input("Enter a sub string : ")
n=int(input("Enter position number : "))

n-=1

l1=len(str)
l2=len(sub)

#take another string as a list
str1=[]

#append 0 to n-1  characters from str to str1
for i in range(n):
    str1.append(str[i])

#append sub string to str 1
for i in range(l2):
    str1.append(sub[i])
str1.append(" ")
for i in range(n,l1):
    str1.append(str[i])
str1=" ".join(str1)
print(str1)