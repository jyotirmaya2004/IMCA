def even_numbers():
    num = 0
    while True:
        yield num
        num += 2  # Next even number

# Using the generator (prints first 10 even numbers)
gen = even_numbers()
for _ in range(10):
    print(next(gen), end=" ")
