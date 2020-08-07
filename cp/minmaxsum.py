def miniMaxSum():
    a = int(input())
    b = int(input())
    c = int(input())
    d = int(input())
    e = int(input())
    arr = a,b,c,d,e
    min =1000
    max =0
    print(arr)
    for i in range(len(arr)):
        if min>=arr[i]:
            min = arr[i]
            

    
    for i in range(len(arr)):
        if max<=arr[i]:
            max = arr[i]
    minsum = a+b+c+d+e-max
    maxsum = a+b+c+d+e-min          
    print(minsum,maxsum)
            
    



miniMaxSum()