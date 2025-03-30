class Laptop:
    def __init__(self, brand, price):
        self.brand = brand
        self._price = price  # Protected attribute

    @property
    def price(self):
        return self._price

    @price.setter
    def price(self, value):
        if value >= 100:
            self._price = value
        else:
            print("Price must be at least $100")

laptop = Laptop("HP", 500)
print(laptop.price)  # 500
laptop.price = 50  # Invalid case
print(laptop.price)  # 500 (unchanged)
