# Function to reverse a string iteratively
def reverse_string_iterative(s):
    reversed_str = ""
    for char in s:
        reversed_str = char + reversed_str  # Prepend each character to the reversed string
    return reversed_str

# Function to check if a string is a palindrome iteratively
def is_palindrome_iterative(s):
    n = len(s)
    for i in range(n // 2):  # Compare characters from both ends
        if s[i] != s[n - 1 - i]:  # If characters do not match, it's not a palindrome
            return False
    return True

# Input string
string = input("Enter a string: ")

# Reverse the string iteratively
reversed_string = reverse_string_iterative(string)
print(f"Reversed String: {reversed_string}")

# Check if the string is a palindrome iteratively
if is_palindrome_iterative(string):
    print(f"The string '{string}' is a palindrome.")
else:
    print(f"The string '{string}' is not a palindrome.")


squares = [x%2 for x in range(1, 11)]
print(squares)
