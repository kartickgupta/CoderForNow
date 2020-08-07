def solution(xs):
    product = 1
    xs.sort()
    #for negative values
    n_index = lb(xs, 0)    
    if(n_index > 0):
        if(xs[n_index] == 0):
            n_index -= 1
        product *= calculate_product(xs, n_index, 0)
    n_product = product
    p_index = (lb(xs, 1))
    if(xs[p_index] != 1):
        p_index+=1
    product *=calculate_product(xs, p_index, 1)

    if(n_index == 0 and p_index == len(xs)):
        product = xs[0]
    if(len(xs) == 2 and xs[1] == 0):
        product = 0
    return str(product)
    
def lb(xs, num):
    l = 0
    h = len(xs)-1
    result = -1
    while(l<=h):
        mid = l + (h-l)//2
        if(xs[mid] == num):
            result = mid
            h = mid -1
        elif(xs[mid] < num):
            l = mid +1
            result = mid
        else:
           h = mid -1
    return result

def calculate_product(xs, index, n):
    pro = 1
    if(n == 0):
        if(index%2 == 1):
            index += 1
        for i in xs[: index]:
            pro *= i
        return pro
    else:
        for i in xs[index:]:
            pro *= i
        return pro