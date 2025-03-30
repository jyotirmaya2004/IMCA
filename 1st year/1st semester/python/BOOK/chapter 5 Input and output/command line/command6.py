import sys 
if len(sys.argv) < 3:
    print("Usage: python script.py <num1> <num2>")
    exit
sum=int(sys.argv[1])+int(sys.argv[2])
print("Sum  :",sum)