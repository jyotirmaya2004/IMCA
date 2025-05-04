#main
num=int(input("Enter number : "))
i=0
while(i!=num):
	for j in range(0,num-i-1):
		print("  ",end="")
	for k in range(1,i+2):
		print(k,end=" ")
	for l in range(i,0,-1):
		print(l,end=" ")
	print()
	i+=1