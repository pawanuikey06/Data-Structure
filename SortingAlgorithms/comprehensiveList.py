names =['John','Jimmy','michel','emmy','Jimmy']

#lets say that we want to create a new list based on this list which 
#consist of names containing letter capital J

j_name =[]

for name in names:
    if 'J' in name:
        j_name.append(name)
    

print(j_name)
names =[name for name in names if "J" in name]

#Using List Comprehension and Reduce these lines of code to just one
#line with
print(names)
j_new =[name for name in names if "J" in name]
print(j_new)


dig =[1,2,3,4,5,6,7,8,10]

new_g =[digit for digit in dig if digit%2==0]
print(new_g)


animals = ["lion", "tiger", "elephant", "cheetah"]

titled_animals =[animal.title() for animal in animals]
print(titled_animals)


print(2//3)
print(2/3)