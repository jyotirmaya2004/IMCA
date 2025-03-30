class Order:
    total_orders = 0  # Class variable

    @classmethod
    def place_order(cls):
        cls.total_orders += 1

Order.place_order()
Order.place_order()
print(Order.total_orders)  # Output: 2
