#to find the number of words in a string
str=input("Enter a strings : ")
i=c=0
flag=True
for s in str: 
    if flag==False and str[i]==" ":
        c+=1
    if str==" ":
        flag=True
    else:
        flag=False
    i+=1
print("No of words : ",c+1)