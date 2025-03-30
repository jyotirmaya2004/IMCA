import random
import string

def password_generator(length):
    chars = string.ascii_letters + string.digits + string.punctuation
    while True:
        yield ''.join(random.choice(chars) for _ in range(length))

# Using the generator
gen = password_generator(8)
for _ in range(5):
    print(next(gen))
