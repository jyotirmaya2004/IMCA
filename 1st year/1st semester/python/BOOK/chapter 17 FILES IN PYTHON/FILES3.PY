#A python program to store group of string into a text file
f=open("mytextfile.txt","w")
print("Enter group of sting (@ at the end) : ")
while str!="@":
    str=input()
    if(str!="@"):
        f.write(str+"\n")
f.close()