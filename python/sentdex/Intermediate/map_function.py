lis = [2, 3, 4, 5, 6, 7, 8]

def square(n):
    return n*n

# ! take a function and applies to all elements in a iterable
result = list(map(square, lis))
print(result)
 # its same as

ans = [square(i) for i in lis]
print(ans)