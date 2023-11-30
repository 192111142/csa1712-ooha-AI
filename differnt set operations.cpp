.python for different set operations


# Define two sets
set1 = {1, 2, 3, 4, 5}
set2 = {4, 5, 6, 7, 8}

# Union of sets
print("Union of set1 and set2: ", set1 | set2)

# Intersection of sets
print("Intersection of set1 and set2: ", set1 & set2)

# Difference of sets
print("Difference of set1 and set2: ", set1 - set2)

# Symmetric difference of sets
print("Symmetric difference of set1 and set2: ", set1 ^ set2)

# Check if set2 is a subset of set1
print("Is set2 a subset of set1: ", set2.issubset(set1))

# Check if set1 is a superset of set2
print("Is set1 a superset of set2: ", set1.issuperset(set2))

