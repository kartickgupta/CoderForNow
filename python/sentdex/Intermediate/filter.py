lis = [i for i in range(10)]

#! filter(function_name, iterable) -- creates an iterable filter object contaninting elements
#! which do not return false in function

def isOdd(n):
    return n%2 == 1

def add_7(n):
    return n+7

result  = list(filter(isOdd, lis))
print(result)

# ! can be easily combined with map function
result = [i for i in map(add_7, filter(isOdd, lis))]
print(result)
