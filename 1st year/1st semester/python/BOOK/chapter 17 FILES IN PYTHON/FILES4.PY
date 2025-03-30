#A python program to appending string into a text file and reading
f=open("mytextfile.txt","a+")
print("Enter group of sting (@ at the end) : ")
while str!="@":
    str=input()
    if(str!="@"):
        f.write(str+"\n")
f.seek(0,0)
print("The file contents are : ")
str=f.read()
print(str)
f.close()
