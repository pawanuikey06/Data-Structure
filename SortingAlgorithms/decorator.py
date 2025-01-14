def decorator_function(original_function):
    def wrapper_function():
        print("Function is being modified")
        return original_function()
    return wrapper_function


@decorator_function
def display():
    print("Hello, World!")

display()
