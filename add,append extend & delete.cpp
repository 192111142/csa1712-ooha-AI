 python for List methods (Add, Append, Extend & Delete)


# Implementing List Methods (Add, Append, Extend & Delete)

# Initializing a list
numbers = [1, 2, 3, 4, 5]

# Adding an element to the list
numbers.append(6)
print("List after adding an element: ", numbers)

# Appending a list to the original list
numbers.extend([7, 8, 9])
print("List after extending with another list: ", numbers)

# Deleting an element from the list using index
del numbers[2]
print("List after deleting an element using index: ", numbers)

# Deleting an element from the list using remove() method
numbers.remove(7)
print("List after deleting an element using remove() method: ", numbers)

