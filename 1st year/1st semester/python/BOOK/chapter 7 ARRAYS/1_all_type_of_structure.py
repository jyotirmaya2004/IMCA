import array as arr

# ------------------------------
# LIST
# ------------------------------
print("=== LIST ===")
my_list = [3, 1, 4]
print("Original List:", my_list)

# Unique methods
my_list.append(5)
my_list.extend([6, 7])
my_list.insert(1, 2)
my_list.remove(4)
my_list.pop(0)
my_list.sort()
my_list.reverse()
print("After list operations:", my_list)

# Similar methods
print("Length:", len(my_list))
print("Count of 5:", my_list.count(5))
print("Index of 5:", my_list.index(5))
print("Max:", max(my_list))
print("Min:", min(my_list))
print("Sum:", sum(my_list))

# ------------------------------
# TUPLE
# ------------------------------
print("\n=== TUPLE ===")
my_tuple = (1, 2, 3, 2)
print("Tuple:", my_tuple)
print("Count of 2:", my_tuple.count(2))
print("Index of 3:", my_tuple.index(3))
print("Length:", len(my_tuple))
print("Max:", max(my_tuple))
print("Min:", min(my_tuple))
print("Sum:", sum(my_tuple))

# ------------------------------
# SET
# ------------------------------
print("\n=== SET ===")
my_set = {1, 2, 3}
print("Original Set:", my_set)

# Unique methods
my_set.add(4)
my_set.update([5, 6])
my_set.discard(2)
print("Union:", my_set.union({6, 7}))
print("Intersection:", my_set.intersection({4, 5, 8}))
print("Difference:", my_set.difference({5, 6}))
print("Symmetric Difference:", my_set.symmetric_difference({4, 5, 8}))

# Similar methods
print("Length:", len(my_set))
print("Max:", max(my_set))
print("Min:", min(my_set))
print("Sum:", sum(my_set))

# ------------------------------
# DICTIONARY
# ------------------------------
print("\n=== DICTIONARY ===")
my_dict = {"a": 1, "b": 2}
print("Original Dict:", my_dict)

# Unique methods
print("Get value of 'a':", my_dict.get("a"))
print("Keys:", list(my_dict.keys()))
print("Values:", list(my_dict.values()))
print("Items:", list(my_dict.items()))
my_dict.setdefault("c", 3)
my_dict.popitem()
my_dict.update({"d": 4})
print("After dict operations:", my_dict)

# Similar methods
print("Length:", len(my_dict))
print("Key 'a' exists?", "a" in my_dict)

# ------------------------------
# ARRAY
# ------------------------------
print("\n=== ARRAY ===")
my_array = arr.array('i', [1, 2, 3])
print("Original Array:", my_array)

# Unique methods
my_array.append(4)
my_array.insert(1, 10)
my_array.remove(3)
my_array.pop(0)
print("As List:", my_array.tolist())
print("Buffer Info:", my_array.buffer_info())

# Similar methods
print("Length:", len(my_array))
print("Index of 4:", my_array.index(4))
print("Count of 4:", my_array.count(4))
print("Max:", max(my_array))
print("Min:", min(my_array))
print("Sum:", sum(my_array))
