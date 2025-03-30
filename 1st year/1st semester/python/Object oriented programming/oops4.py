#inheritence
class A:
    a=input("Your name : ")
    b=int(input("Your age : "))
    def method1(cls):
        print(cls.a)
class B(A):
    c=int(input("Your Birthday year : "))
    def method(s):
        print("Your name : ",s.a)
        print("Your Birthday year : ",s.c)
r=B()
r.method()