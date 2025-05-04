#main
num=int(input("Enter number : "))
i=0
while(i!=num):
	for j in range(0,num-i-1):
		print("  ",end="")
	for l in range(i,1,-1):
		print("%c"%(l+64),end=" ")
	for k in range(1,i+1):
		print("%c"%(k+64),end=" ")
	print()
	i+=1