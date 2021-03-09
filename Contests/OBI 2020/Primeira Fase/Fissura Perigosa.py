# coding: utf-8

n, f = map(int, input().split())
matriz = [list(input()) for i in range(n)]
d = [[1, 0], [0, 1], [-1, 0], [0, -1]]

if int(matriz[0][0]) <= f:
  matriz[0][0] = '*'
  q = [[0, 0]]
  
  while len(q):
    i, j = q.pop(0)
    
    for k in d:
      a, b = i + k[0], j + k[1]
      
      if 0 <= a < n and 0 <= b < n:
        if matriz[a][b] != '*' and int(matriz[a][b]) <= f:
          matriz[a][b] = '*'
          q.append([a, b])
          
for x in matriz:
  print(*x, sep='')