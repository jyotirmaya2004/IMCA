import numpy as np

a = 0
b = 1
num=int(input("Enter number of sequence : "))
for i in range(num):
    print(a)
    temp=a
    a=b
    b=temp+b
    # Method 1: Using recursion
    def fibonacci_recursive(n):
        if n <= 0:
            return 0
        elif n == 1:
            return 1
        else:
            return fibonacci_recursive(n-1) + fibonacci_recursive(n-2)

    print("Fibonacci sequence using recursion:")
    for i in range(num):
        print(fibonacci_recursive(i))

    # Method 2: Using dynamic programming (memoization)
    fibonacci_cache = {}

    def fibonacci_memoization(n):
        if n in fibonacci_cache:
            return fibonacci_cache[n]
        if n <= 0:
            value = 0
        elif n == 1:
            value = 1
        else:
            value = fibonacci_memoization(n-1) + fibonacci_memoization(n-2)
        fibonacci_cache[n] = value
        return value

    print("Fibonacci sequence using memoization:")
    for i in range(num):
        print(fibonacci_memoization(i))

    # Method 3: Using iteration
    def fibonacci_iterative(n):
        a, b = 0, 1
        for _ in range(n):
            yield a
            a, b = b, a + b

    print("Fibonacci sequence using iteration:")
    for val in fibonacci_iterative(num):
        print(val)

    # Method 4: Using a generator
    def fibonacci_generator():
        a, b = 0, 1
        while True:
            yield a
            a, b = b, a + b

    print("Fibonacci sequence using generator:")
    fib_gen = fibonacci_generator()
    for _ in range(num):
        print(next(fib_gen))

    # Method 5: Using matrix exponentiation

    def fibonacci_matrix(n):
        F = np.matrix([[1, 1], [1, 0]])
        if n == 0:
            return 0
        else:
            return (F**(n-1))[0, 0]

    print("Fibonacci sequence using matrix exponentiation:")
    for i in range(num):
        print(fibonacci_matrix(i))
