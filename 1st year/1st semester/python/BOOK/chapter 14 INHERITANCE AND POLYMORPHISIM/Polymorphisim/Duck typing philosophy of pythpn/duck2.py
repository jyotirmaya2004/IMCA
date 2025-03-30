class List:
    def __init__(self, data):
        self.data = data

    def __iter__(self):
        return iter(self.data)

class Tuple:
    def __init__(self, data):
        self.data = data

    def __iter__(self):
        return iter(self.data)

def print_data(data):
    for item in data:
        print(item)

list = List([1, 2, 3])
tuple = Tuple((4, 5, 6))

print_data(list)  # Output: 1, 2, 3
print_data(tuple)  # Output: 4, 5, 6


