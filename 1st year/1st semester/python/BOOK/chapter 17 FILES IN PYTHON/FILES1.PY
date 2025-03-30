#creating a file to store character
#open the file for writing data
f=open('myfile.txt','w')

str=input("Enter a string : ")
f.write(str)
f.close()
