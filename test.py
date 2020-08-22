if __name__ == '__main__':
    N = int(input())

l = []

for i in range(N):
    k=input().split()
    if k[0]=='print':
        print(l)
    elif k[0]=='insert':
        l.insert(int(k[1]),int(k[2]))
    elif k[0]=='append':
        l.append(int(k[1]))
    elif k[0]=='remove':
        l.remove(int(k[1]))
    elif k[0]=="pop":
        l.pop()
    elif k[0]=='sort':
        l = sorted(l)
    elif k[0] == 'reverse':
        l = sorted(l, reverse = True)