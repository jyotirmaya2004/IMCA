class Laptop:
    def __init__(self, brand, ram, storage):
        self.brand = brand
        self.ram = ram
        self.storage = storage

    def __str__(self):
        return f"Laptop Brand: {self.brand}, RAM: {self.ram}GB, Storage: {self.storage}GB"

laptop1 = Laptop("Dell", 16, 512)
print(laptop1)  # Calls __str__()
