from functools import singledispatch

@singledispatch
def fun(arg):
    return arg

@fun.register
def _(arg: int):
    return arg * 2

@fun.register
def _(arg: str):
    return arg.upper()

@fun.register
def _(arg: list):
    return [x ** 2 for x in arg]

print(fun(5))  # Output: 10
print(fun("hello"))  # Output: HELLO
print(fun([1, 2, 3, 4, 5]))  # Output: [1, 4, 9, 16, 25]
