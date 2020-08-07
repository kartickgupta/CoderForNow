def solution(x, y):
    x = int(x)
    y = int(y)
    if(x < 1 and y <1):
        return 'impossible'
    elif(x == y and x!= 1):
        return 'impossible'
    
    count =0
    a = min(x,y)
    b = max(x, y)
    print(a, b)
    while(a > 0 and b >0):
        if(a == b):
            break
        if a < b:
            if(b%a == 0):                
                count += b//a -1
                break
            else:                
                count += b//a
                b = b%a
                print(count,'count2')
        elif b < a:
            if(a%b == 0):                
                count += a//b -1
            else:                
                count += a//b 
                a = a%b
                print(count,'count4')    
    
    print(count)
    print(a, b)

    if(a == 1 or b == 1):
        return str(count)
    else:
        return 'impossible'

print(solution(7, 4))
print(solution(2, 4))
print(solution(2, 1))
print(solution(1, 1))
print(solution(3, 5))