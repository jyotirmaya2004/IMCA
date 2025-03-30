# Create a list
my_list = [10, 20, 30, 40, 50]

# 1. append(item): Adds an item to the end of the list
my_list.append(60)
print("After append:", my_list)

# 2. clear(): Removes all items from the list
copy_list = my_list.copy()  # Copy the list for later
my_list.clear()
print("After clear:", my_list)

# 3. copy(): Returns a shallow copy of the list
my_list = copy_list.copy()
print("After copy:", my_list)

# 4. count(item): Counts occurrences of an item
count_20 = my_list.count(20)
print("Count of 20:", count_20)

# 5. extend(iterable): Extends the list by appending elements from an iterable
my_list.extend([70, 80, 90])
print("After extend:", my_list)

# 6. index(item): Returns the index of the first occurrence of an item
index_30 = my_list.index(30)
print("Index of 30:", index_30)

# 7. insert(index, item): Inserts an item at a specified index
my_list.insert(2, 25)
print("After insert:", my_list)

# 8. pop(index): Removes and returns the item at the specified index
popped_item = my_list.pop(2)
print("After pop:", my_list, "| Popped item:", popped_item)

# 9. remove(item): Removes the first occurrence of an item
my_list.remove(40)
print("After remove:", my_list)

# 10. reverse(): Reverses the list in place
my_list.reverse()
print("After reverse:", my_list)

# 11. sort(): Sorts the list in ascending order
my_list.sort()
print("After sort:", my_list)
