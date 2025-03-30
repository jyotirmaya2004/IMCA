#  Using ast.literal_eval() (Safe Alternative)
# Instead of eval(), use ast.literal_eval() to safely parse structured input.

import ast

# Taking input from the user
data = ast.literal_eval(input("Enter a list, tuple, or dictionary: "))

# Printing the parsed data
print("Data:", data)
print("Type of Data:", type(data))

# ✅ Example Input: { "name": "Alice", "age": 25 }
# ✅ Output: {'name': 'Alice', 'age': 25} (Dictionary)

