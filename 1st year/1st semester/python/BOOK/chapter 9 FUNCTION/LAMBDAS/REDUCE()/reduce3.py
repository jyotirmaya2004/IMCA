

import functools

people = [
    {"name": "John", "age": 25},
    {"name": "Jane", "age": 30},
    {"name": "Bob", "age": 20}
]
result = functools.reduce(lambda x, y: x if x["age"] > y["age"] else y, people)
print(result)
