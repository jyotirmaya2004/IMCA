str="Hello World "
print(str*4)
s=str[5:7]*3
print(s)

#concartenation of strings
s1="Hello"
s2="World"
s3=s1+s2
print(s3)

#checking the substring
s4="Hello"
s5="He"
if s5 in s4:
    print("Substring is present")
else:
    print("Substring is not present")

#comparing the strings
s6="Hello"
s7="Hello"
if s6==s7:
    print("Both strings are equal")
else:
    print("Both strings are not equal")

#removing the spaces from the string
s8=" Hello World "
s9=s8.strip()
print(s9)

#converting the string to lower case
s10="Hello World"
s11=s10.lower()
print(s11)

#converting the string to upper case
s12="Hello World"
s13=s12.upper()
print(s13)

#replacing the string
s14="Hello World"
s15=s14.replace("World","Python")
print(s15)

#splitting the string
s16="Hello World"
s17=s16.split(" ")
print(s17)

#finding the substring
s18="Hello World"
s19=s18.find("World")
print(s19)
#if not found then it will return -1

#finding the occurance of sub string and index
s20="Hello World"
s21=s20.count("o")
print(s21)
n=s20.index("o",0,len(s20))
print(n)

#dispalaying all positions of substring
s22="Hello World"
n=0
while n!=-1:
    n=s22.find("o",n,len(s22))
    if n!=-1:
        print(n,end=" ")
        n+=1
print()
#checking the string is alphanumeric
s23="Hello123"
print(s23.isalnum())
s24="Hello"
print(s24.isalnum())
#replacing string with another string
str="The quick brown fox jumps over the lazy dog"
s1="quick"
s2="slow"
s3=str.replace(s1,s2)
print(s3)

#spliting and joining the string
str="The quick brown fox jumps over the lazy dog"
s1=str.split()
print(s1)
s2=" ".join(s1) #joining the string with space
print(s2)

#changing case of string
str="Hello World"
s1=str.upper()
print(s1)
s2=str.lower()
print(s2)
s3=str.swapcase()
print(s3)
s4=str.title()
print(s4)
s5=str.capitalize()
print(s5)
