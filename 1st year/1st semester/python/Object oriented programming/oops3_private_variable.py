class student:
    def __init__(s):
            s.name=input("Enter a name : ")
            s.__age=int(input("Enter your age : "))
    def display(s):
        print("Your name : ",s.name)
        print("Your age : ",s.__age)#private variable
p1=student()
p1.display()
print(p1._student__age)#another way
