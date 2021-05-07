# coding: utf-8

from collections import deque

for case in range(int(input())):
  m, r = [int(input()) for i in range(2)]
  answer = 0
  graph = [list() for i in range(m)]
  queue = deque()
  visited = [False for i in range(m)]
  
  for i in range(r):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)
    
  for i in range(m):
    if not visited[i]:
      answer += 1
      queue.append(i)
    
    while queue:
      u = queue.popleft()
      
      for v in graph[u]:
        if not visited[v]:
          queue.append(v)
          visited[v] = True
          
  print(answer - 1)