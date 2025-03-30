#Pickle in python
import EMP,pickle

#open emp.dat file as binary file for writting
f=open("emp.dat","wb")
n=int(input("How may employees ? "))

for i in range(n):
    id=int(input("Enter a ID : "))
    name=input("Enter your name : ")
    sal=float(input("ENter your salary : "))
    e=EMP.EMP(id,name,sal)
    pickle.dump(e,f)
f.close()