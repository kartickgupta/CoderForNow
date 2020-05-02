def staircase(n):
    
    for step in range(n):
        print(' '*(n-1-step)+ '#'*(step+1))

n =int(input())        
staircase(n)
