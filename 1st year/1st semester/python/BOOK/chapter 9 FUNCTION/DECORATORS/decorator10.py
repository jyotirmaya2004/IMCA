def uppercase_decorator(func):
    def wrapper():
        return func().upper()
    return wrapper

def exclamation_decorator(func):
    def wrapper():
        return func() + "!!!"
    return wrapper

@uppercase_decorator
@exclamation_decorator
def greet():
    return "hello"

print(greet())
