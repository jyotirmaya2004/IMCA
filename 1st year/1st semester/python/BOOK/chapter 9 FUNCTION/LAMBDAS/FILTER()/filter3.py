students = [
    {"name": "John", "age": 20, "grade": 85},
    {"name": "Jane", "age": 17, "grade": 60},
    {"name": "Bob", "age": 22, "grade": 90},
    {"name": "Alice", "age": 19, "grade": 75},
    {"name": "Charlie", "age": 16, "grade": 50}
]

filtered_students = list(filter(
    lambda student: student["age"] >= 18 and student["grade"] >= 70,
    students
))

print(filtered_students)

