strings = ["apple", "banana", "cherry", "apricot", "avocado"]


result = ",".join(map(
    lambda s: s.upper(),
    filter(
        lambda s: s.startswith("a"),
        strings
    )
))
print(result)

