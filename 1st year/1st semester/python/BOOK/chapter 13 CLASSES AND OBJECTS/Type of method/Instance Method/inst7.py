class ShoppingCart:
    def __init__(self):
        self.items = []

    def add_item(self, item):
        self.items.append(item)

cart = ShoppingCart()
cart.add_item("Apple")
cart.add_item("Banana")
print(cart.items)  # Output: ['Apple', 'Banana']
