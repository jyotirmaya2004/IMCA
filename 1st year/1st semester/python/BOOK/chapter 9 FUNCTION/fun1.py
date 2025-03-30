def fun1():
    print('Raeched fun1')
    def fun2():
        print('inner avatar')
    print('Outer avatar')
    fun2()
print(fun1())
print(type(fun1()))
x=fun1()
print(x)