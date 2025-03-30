#checking if a file exist and then reading data
import os,sys
fname=input("Enter file name :")

if os.path.isfile(fname):
    f=open(fname,"r")
else:
    print(fname+"does not exist")
    sys.exit()
print("The file contents are : ")
str=f.read()
print(str)

f.close()