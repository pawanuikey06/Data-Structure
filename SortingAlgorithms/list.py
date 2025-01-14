my_list = [10, 20, 30, 40, 50]

# Accessing the first element
print(my_list[0])  # Output: 10

# Accessing the last element
print(my_list[-1])  # Output: 50



my_list = [1, 2, 3]

# Using append() to add an element at the end
my_list.append(4)
print(my_list)  # Output: [1, 2, 3, 4]

# Using insert() to add an element at a specific position
my_list.insert(1, 10)  # Insert 10 at index 1
print(my_list)  # Output: [1, 10, 2, 3, 4]

# Using extend() to add all elements of another list
my_list.extend([5, 6])
print(my_list)  # Output: [1, 10, 2, 3, 4, 5, 6]
