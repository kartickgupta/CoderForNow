def solution(l):
  X = []
  for i in l:
      B = (i.split('.'))
      for x in range(len(B)):
          B[x] = int(B[x])
      X.append(B)

  X.sort()
  A=[]
  for i in X:
      B =[]
      for x in range(len(i)):
          i[x] = str(i[x])
      B = '.'.join(i)
      A.append(B)
  #result = ','.join(l)
  return A

print(solution(["1.11", "2.0.0", "1.2", "2", "0.1", "1.2.1", "1.1.1", "2.0"]))