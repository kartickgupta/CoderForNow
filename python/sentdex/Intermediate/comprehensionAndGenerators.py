# List Comprehension [] 
# makes a list and thus is stored in memory
# Single line for loops
# Functions can be executed in this
xyz = [i for i in range(10)] 
print(xyz)

# same as 
xyz = []
for i in range(5):
    xyz.append(i)

print(xyz)

# ! Generators
# if you wanna convert list compheresnion to  generator ( ) are used- create an generator object
# It's always iteratble so numbers are not stored in memory
# Nothing Except for Creation of Generartor Object takes place
xyz = (i for i in range(10))
print(xyz) # Prints Generator Object

for i in xyz:
    print(i)

input_list = [2, 324,43 ,545,67,10 ,34,32,54,76,8790 ,82]
abc = [i for i in input_list if i%2 == 0]
print(abc, 'Prints the list')

# Using abc as generator
abc = (i for i in input_list if i%2 == 0)
print(abc, 'Generator Object')
for i in abc:
    print(i)

# 2-D list or single line for loop
#From a for loop prespective, it has to be written inwards to outwards
abc = [[[i, ii] for ii in range(5)] for i in range(5) ]
for j in abc:
    print(j)

print('It\'s same as')
cde =[]

for i in range(5):
    temp = []
    for ii in range(5):
        temp.append([i, ii])
    cde.append(temp)
print(cde)

print(cde == abc )

# 
ghf =  ([[i, ii] for ii in range(5)] for i in range(5) )
for i in ghf:
    print(i)

# Printitng using List Comprehesnion
[print(i) for i in input_list]

## Printitng using List Comprehesnion
baaby = (print(i) for i in input_list)
print(baaby)

for i in baaby:
    i
