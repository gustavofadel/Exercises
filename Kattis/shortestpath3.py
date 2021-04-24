# coding: utf-8

infinity = 10 ** 9 + 10

while True:
  n, m, q, s = map(int, input().split())
  
  if n == m == q == s == 0:
    break
  
  distance = [infinity for i in range(n)]
  distance[s] = 0
  graph = [list() for i in range(n)]
  
  for i in range(m):
    u, v, w = map(int, input().split())
    graph[u].append((v, w))
    
  for i in range(n - 1):
    for u in range(n):
      for v, w in graph[u]:
        if distance[u] + w < distance[v] and distance[u] != infinity:
          distance[v] = distance[u] + w
          
  for i in range(n - 1):
    for u in range(n):
      for v, w in graph[u]:
        if distance[u] + w < distance[v] and distance[u] != infinity:
          distance[v] = -infinity
          
  for i in range(q):
    t = int(input())
    
    if distance[t] == infinity:
      print('Impossible')
      
    elif distance[t] == -infinity:
      print('-Infinity')
      
    else:
      print(distance[t])
      
  print()