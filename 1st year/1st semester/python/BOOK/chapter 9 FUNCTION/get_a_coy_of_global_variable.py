#same name for global and local variable
a=1
def my_function():
    a=2
    x=globals()['a']
    print("Global variable : ",x)
    print("local variable : ",a)
my_function()