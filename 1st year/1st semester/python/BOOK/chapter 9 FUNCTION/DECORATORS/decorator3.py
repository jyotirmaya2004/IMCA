import time

def logger(func):
    def wrapper(*args, **kwargs):
        print(f"Executing {func.__name__} with arguments {args} {kwargs}")
        result = func(*args, **kwargs)
        print(f"{func.__name__} returned {result}")
        return result
    return wrapper

@logger
def add(a, b):
    return a + b

add(5, 10)
