# Student Management System
students = {}

def add_student(roll_no, name, marks):
    students[roll_no] = {"name": name, "marks": marks}
    print(f"Student {name} added successfully!")

def remove_student(roll_no):
    if roll_no in students:
        del students[roll_no]
        print(f"Student {roll_no} removed successfully!")
    else:
        print("Student not found!")

def display_students():
    if not students:
        print("No students available.")
    else:
        print("Student List:")
        for roll_no, details in students.items():
            print(f"Roll No: {roll_no}, Name: {details['name']}, Marks: {details['marks']}")

def search_student(roll_no):
    if roll_no in students:
        print(f"Found: {students[roll_no]}")
    else:
        print("Student not found!")

# Program execution
add_student(1, "Alice", 90)
add_student(2, "Bob", 85)
display_students()
search_student(1)
remove_student(2)
display_students()
