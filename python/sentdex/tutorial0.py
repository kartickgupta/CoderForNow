progamming_languages = 'Python','C++','JAVA','JS','SQl'

print(type(progamming_languages))

for languages in progamming_languages:
    print(languages)


for (no,languages) in enumerate(progamming_languages): #enumerate-- Displays index value with the value (i,j) i= index value , j = value
    print(no,languages)

print("--------------------------------------------------------------------------------------------------------------------")

l=[1,2,3,4,5] #lists
print(l[1])         #indexing in lists  
print(l[-3])        #repeats itself in multiples in negavtive
print(l[2:4])       #slicing in list        
print(l[2:])

l[3]=88             #lists are mutable
print(l)

l=[2.3,45,5]
print(l)

print("--------------------------------------------------------------------------------------------------------------------")
def function():             #defining a function
    print("Hello, World!")
print("--------------------------------------------------------------------------------------------------------------------")
function()              #calling a function

function                #function is not called, it just points to the function
print("Nothing Happens!")

x=function              #function a copied in some other variable, ,aking that variable a function istelf
x()
print("--------------------------------------------------------------------------------------------------------------------")

game="Hello"
print(game)

def test():         #game could'nt change coz it's a local variable 
    global game     #making it global i.e. accessible from anywhere
    game="Hi"
    print(game)

test()
print(game)    

x=range(10) #RETURNS AN ITERRATOR (not a list) from 0 to n-1
print(x)

for i in x:
    print(i,type(x))

r=[2,3,4,5,5,6,6]
print(reversed(r))