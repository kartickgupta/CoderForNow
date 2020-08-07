def solution(N):
    d = { 1: {}, 2:{}}
    result = 0
    
    for i in range(3, N+1):
        d[i] = {}
        a =0
        sum = 0
        while( sum < i):
            a += 1
            sum += a
        #print('a = ',a, 'sum = ',sum, i)
        count_i = 0
        
        for j in range(a, i):
            h = i -j
            #print(j, h)
            count_j = 0
            if len(d[h]) == 0:
                count_j = 1
            else: 
                for k in d[h]:
                    if k < j :
                        count_j += d[h][k]
                if 2*j > i:
                    count_j += 1
            
            d[i][j] = count_j
            count_i += count_j
        
        result = count_i

  
    return(result)


print(solution(200))
print(487067745)