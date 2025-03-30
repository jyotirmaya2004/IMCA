class Function:
    def __call__(self, x):
        return x * 2

class Lambda:
    def __init__(self, func):
        self.func = func

    def __call__(self, x):
        return self.func(x)

def apply_callable(callable, x):
    return callable(x)

function = Function()
lambda_func = Lambda(lambda x: x * 3)

print(apply_callable(function, 5))  # Output: 10
print(apply_callable(lambda_func, 5))  # Output: 15
