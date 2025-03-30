#tuple= collection which is ordered and unchangeable
#       used to group together related data
student=("Jyotirmaya",21,"male")
print(student.count(21))
print(student.index("male"))
for x in student:
    print(x,end=" ")
if "male" in student:
    print("\nyes JB")