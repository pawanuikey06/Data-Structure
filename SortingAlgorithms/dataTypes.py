x=3+4j
y =5j
j=2
print(type(x))
print(type(j))


r =range(5)

print(list(r))
print(tuple(r))
print(str(r))


student = {"name": "John", "age": 25, "grade": "A"}
print(type(student))  # Output: <class 'dict'>
print(student)
print(student["age"])


st ={1,1,1,2,3,1,3,9,9,6,6}
print(st)


b=b'hello'
print(b)
print(type(b),b)

ba =bytearray(5)
print(ba)

# list = [1, 2, 3]  # Avoid this, as it overwrites the built-in `list` type
# print(list)

x=list((1,2,4))
print(x)