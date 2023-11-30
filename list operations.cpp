 python for list operations


# Define a nested list
nested_list = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

# Get the length of the list
print("Length of the list: ", len(nested_list))

# Concatenate two lists
list1 = [1, 2, 3]
list2 = [4, 5, 6]
concat_list = list1 + list2
print("Concatenated list: ", concat_list)

# Check membership in the list
print("Is 3 in the list: ", 3 in list1)

# Iterate through the list
for sub_list in nested_list:
    for item in sub_list:
        print(item)

# Indexing and slicing
list3 = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print("First item in the list: ", list3[0])
print("Last item in the list: ", list3[-1])
print("Items from index 2 to 5: ", list3[2:6])


