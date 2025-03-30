products = [
    {"name": "Product A", "price": 100, "quantity": 5},
    {"name": "Product B", "price": 200, "quantity": 3},
    {"name": "Product C", "price": 500, "quantity": 2},
    {"name": "Product D", "price": 50, "quantity": 10}
]


result = sum(map(
    lambda product: product["price"] * product["quantity"],
    filter(
        lambda product: product["price"] * product["quantity"] <= 1000,
        products
    )
))
print(result)
