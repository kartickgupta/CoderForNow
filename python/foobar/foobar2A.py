def solution(xs):
    product = 1
    xs.sort()
    #for negative values
    n_index = lb(xs, 0)
    n_product = 0
    print(n_index, 'N Index')  
    if(n_index > 0):
        if(xs[n_index] == 0):
            n_index -= 1
        if(n_index == 0): # ! change Maker
            n_product = xs[0]
        else:
            n_product = calculate_product(xs, n_index, 0)        
    print(n_product, 'N-Product')
    # for postive index
    p_index = (ub(xs, 0))
    p_product = 0
    if(xs[p_index] is not -1):
        if(xs[p_index] == 0):
            if(len(xs)-1 == p_index):
               p_product = 0
            else:
                p_index += 1    
                print('Step Occured')
        print(p_index, 'P Index')
        p_product =calculate_product(xs, p_index, 1)
    print(n_product, p_product, 'Hello Honey Bunny')
    if(n_product > 0 and p_product > 0 or n_product == p_product):
        product = n_product*p_product
    if(n_product <= 0):
        product = p_product
    return product


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


def ub(xs, num):
    l = 0
    h = len(xs)-1
    result = -1
    while(l<=h):
        mid = l + (h-l)//2
        if(xs[mid] == num):
            result = mid
            l=mid+1
        elif(xs[mid] < num):
            l = mid +1
            
        else:
           h = mid -1
           result = mid
    return result


def calculate_product(xs, index, n):
    pro = 1
    check =0
    if(n == 0):
        print(index, 'FInal N Index')
        if(index%2 == 1):
            index += 1
            print(index, 'finally n_index')
        for i in xs[: index]:
            pro *= i
            print(i, ' vales in list')       
        if(check > pro):
            pro = check
        print(pro, 'N Product')
        return pro
    else:
        for i in xs[index:]:
            pro *= i
        print(pro, 'P Product')
        return pro

print(solution([0,0,0,0,0,0,0,0,0,0, 2]), 'Final Answer')
print('----------------------------------------------')
print(solution([-1,0]), 'Final Answer')
print('----------------------------------------------')
print(solution([-1,2]), 'Final Answer')
print('----------------------------------------------')
print(solution([10000]), 'Final Answer')
print('----------------------------------------------')
print(solution([2, 0,2,2,0]), 'Final Answer')

