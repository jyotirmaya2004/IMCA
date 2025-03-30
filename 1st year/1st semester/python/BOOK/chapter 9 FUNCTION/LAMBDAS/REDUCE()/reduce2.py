
import functools

strings = ["Hello", " ", "World", "!"]
result = functools.reduce(lambda x, y: x + y, strings)
print(result)

