def prime_generator():
    num = 2
    while True:
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                break
        else:
            yield num  # Yield prime number
        num += 1

# Using the generator (prints first 10 primes)
gen = prime_generator()
for _ in range(10):
    print(next(gen), end=" ")
