class Product:
    def __init__(self, name, price, discount):
        self.name = name
        self.price = price
        self.discount = discount

    @property
    def discounted_price(self):
        return self.price - (self.price * self.discount / 100)

product = Product("Smartphone", 1000, 20)
print(f"Discounted Price: ${product.discounted_price}")  # $800
