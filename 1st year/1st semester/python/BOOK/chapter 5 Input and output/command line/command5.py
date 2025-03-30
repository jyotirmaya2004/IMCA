import sys 
n= len(sys.argv)
args= sys.argv
print("No of command line argument : ",n)
print("The arguments are : ",args)
print("The args one by one :")
for i in args:
    print(i)