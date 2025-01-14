# Define a simple function
def greet(name):
    return f"Hello, {name}!"

# Define a function that accepts another function as an argument
def execute_function(func, value):
    return func(value)

# Pass the greet function as an argument
result = execute_function(greet, "Alice")
print(result)


# Normal function
def add(x, y):
    return x + y

# Lambda function equivalent
add_lambda = lambda x, y: x + y

print(add_lambda(3, 4))  # Output: 7




# List of tuples
data = [(1, 2), (3, 1), (5, 0)]

# Sort the list by the second value in each tuple
sorted_data = sorted(data, key=lambda x: x[1])

print(sorted_data)


numbers = [1, 2, 3, 4, 5]

# Square each number using lambda
squared_numbers = list(map(lambda x: x ** 2, numbers))

print(squared_numbers)




numbers =[11,20,31,40,51,60,71,80,91,100]

even =list(filter(lambda x:x%2==0 and x>59,numbers))
print(even)



# another example

city =['jaipur','kota','chandigarh','delhi','Muzzafarpur']

sort =sorted(city ,key=lambda x:len(x),reverse=True)

print(sort)