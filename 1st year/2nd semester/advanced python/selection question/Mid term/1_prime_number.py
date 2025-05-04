def prime(num):
	if num <= 1:
		return False
	for i in range(2, num):
		if num % i == 0:
			return False
	return True
#main
print("Enter the rnge of prime number : ")
n1=int(input("From : "))
n2=int(input("to : "))
print("The prime number are : ",end="")
count=0
for i in range(n1,n2+1):
	flag=prime(i)
	if(flag==True):
		print(i,end=",")
		count+=1
if(count==0):
	print("No element found !!!")
