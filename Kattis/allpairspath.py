# coding: utf-8

infinity = 10 ** 18 + 10

while True:
  n, m, q = map(int, input().split())
  
  if n == m == q == 0:
    break
  
  graph = [[infinity for j in range(n)] for i in range(n)]
  
  for i in range(n):
    graph[i][i] = 0
    
  for i in range(m):
    u, v, w = map(int, input().split())
    graph[u][v] = min(graph[u][v], w)
    
  for k in range(n):
    for i in range(n):
      for j in range(n):
        if graph[i][k] < infinity and graph[k][j] < infinity:
          graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j])
          
  for i in range(n):
    for j in range(n):
      for k in range(n):
        if graph[k][k] < 0 and graph[i][k] != infinity and graph[k][j] != infinity:
          graph[i][j] = -infinity
          
  for i in range(q):
    u, v = map(int, input().split())
    
    if graph[u][v] == infinity:
      print('Impossible')
      
    elif graph[u][v] == -infinity:
      print('-Infinity')
      
    else:
      print(graph[u][v])
      
  print()