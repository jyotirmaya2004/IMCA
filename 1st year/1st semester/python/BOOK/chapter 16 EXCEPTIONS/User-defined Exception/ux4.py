class DuplicateItemError(Exception):
    def __init__(self, item):
        message = f"Item '{item}' already exists"
        super().__init__(message)

class ShoppingCart:
    def __init__(self):
        self.items = []

    def add_item(self, item):
        if item in self.items:
            raise DuplicateItemError(item)
        else:
            self.items.append(item)
            print(f"Added '{item}' to cart")

try:
    cart = ShoppingCart()
    cart.add_item("apple")
    cart.add_item("apple")
except DuplicateItemError as e:
    print(e)


