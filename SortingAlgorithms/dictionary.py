# Creating a dictionary
student = {
    "name": "John Doe",
    "age": 20,
    "courses": ["Math", "Science", "English"]
}

# Accessing values
print(student["name"])  # Output: John Doe
print(student["age"])   # Output: 20
print(student["courses"])  # Output: ['Math', 'Science', 'English']


print(student.get("age"))  # Output: 20
print(student.get("gender"))  # Output: Not specified


print(student.items())  # Output: dict_items([('name', 'John Doe'), ('age', 20), ('courses', ['Math', 'Science', 'English'])])


my_list =[1,2,3]
for item in my_list:
    my_list.append(item)  # Adding while iterating

print(my_list)