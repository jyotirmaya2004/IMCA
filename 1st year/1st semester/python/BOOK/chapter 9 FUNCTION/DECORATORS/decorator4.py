import time

def timing_decorator(func):
    def wrapper(*args, **kwargs):
        start = time.time()
        result = func(*args, **kwargs)
        end = time.time()
        print(f"{func.__name__} took {end - start:.4f} seconds to execute")
        return result
    return wrapper

@timing_decorator
def slow_function():
    time.sleep(2)
    print("Finished slow function!")

slow_function()
