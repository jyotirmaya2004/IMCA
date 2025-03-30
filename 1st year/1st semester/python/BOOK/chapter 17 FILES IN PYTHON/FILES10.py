import pickle
import EMP

f = open("emp.dat", "rb")
print("Employees details : ")
while True:
    try:
        obj = pickle.load(f)
        obj.display()
    except Exception as e:
        print(e)
        break
f.close()