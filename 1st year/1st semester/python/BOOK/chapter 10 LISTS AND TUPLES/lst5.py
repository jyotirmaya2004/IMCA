# Creating a list
lst = [1, 2, 3, 4, 5]

# 1. Adding Elements
lst.append(6)            # Adds 6 at the end
lst.insert(2, 10)        # Inserts 10 at index 2
lst.extend([7, 8, 9])    # Extends list with multiple elements

# 2. Removing Elements
lst.pop()                # Removes last element (9)
lst.pop(3)               # Removes element at index 3
lst.remove(10)           # Removes first occurrence of 10
lst.clear()              # Clears all elements

# Re-initializing list for further operations
lst = [1, 2, 3, 4, 5, 2, 3, 4, 2, 1]

# 3. Searching & Counting
index_3 = lst.index(3)   # Finds index of first occurrence of 3
count_2 = lst.count(2)   # Counts occurrences of 2

# 4. Sorting & Reversing
lst.sort()               # Sorts list in ascending order
lst.reverse()            # Reverses the list

# 5. Copying List
copy_lst = lst.copy()    # Creates a copy of lst

# 6. List Comprehension
squared_lst = [x**2 for x in lst]  # Squaring each element

# 7. Membership & Iteration
if 4 in lst:
    print("4 is in the list")

for x in lst:
    print(x, end=" ")

# 8. Joining & Splitting Lists
words = ["hello", "world"]
joined_str = "-".join(words)  # Joins list into string
split_lst = joined_str.split("-")  # Splits string back into list

# 9. Nested List Processing
nested_lst = [[1, 2], [3, 4], [5, 6]]
nested_element = nested_lst[1][1]  # Accessing element

# Printing all results
print("\nModified List:", lst)
print("Index of 3:", index_3)
print("Count of 2:", count_2)
print("Sorted and Reversed List:", lst)
print("Copy of List:", copy_lst)
print("Squared List:", squared_lst)
print("Joined String:", joined_str)
print("Split List:", split_lst)
print("Nested List Element:", nested_element)
