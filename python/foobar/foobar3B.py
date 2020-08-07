l = [1, 2, 3]

multiples = [] # array of indices of multiples in reverse order
for i in range(len(l)):
    A = []
    for j in range(i-1, -1, -1):
            if l[i]%l[j] == 0:
                A.append(j)
    multiples.append(A)

print(multiples)

count = 0
for i in range(len(l)-1,1,-1 ):
    print(i)
    for j in multiples[i]:
        print(multiples[i])
        count += len(multiples[j])

print('--------------------------------')
print(count)