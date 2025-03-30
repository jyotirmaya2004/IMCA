people = [
    {"name": "John", "age": 25, "occupation": "Engineer"},
    {"name": "Jane", "age": 35, "occupation": "Economist"},
    {"name": "Bob", "age": 40, "occupation": "Doctor"},
    {"name": "Alice", "age": 30, "occupation": "Engineer"},
    {"name": "Charlie", "age": 20, "occupation": "Student"}
]
names = list(map(
    lambda person: person["name"],
    filter(
        lambda person: person["age"] > 30 and person["occupation"].startswith("E"),
        people
    )
))
print(names)
