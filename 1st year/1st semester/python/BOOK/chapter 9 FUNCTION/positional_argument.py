def attach(s1,s2):
    space=" "
    s3=s1+space+s2
    return s3
str1=input("Enter your first name : ")
str2=input("Enter your second name : ")
s=attach(str1,str2)
print(f"Hi {s}")