# coding: utf-8

from heapq import heappush, heappop

while True:
  n, m = map(int, input().split())
  
  if n == m == 0:
    break
  
  fraction = [0 for i in range(n)]
  graph = [list() for i in range(n)]
  visited = [False for i in range(n)]
  
  for i in range(m):
    x, y, f = input().split()
    x, y, f = int(x), int(y), float(f)
    
    graph[x].append((y, f))
    graph[y].append((x, f))
    
  priorityQueue = list()
  
  heappush(priorityQueue, (-1, 0))
  
  while len(priorityQueue) > 0:
    size, intersection = heappop(priorityQueue)
    
    if visited[intersection]:
      continue
    
    fraction[intersection] = -size
    visited[intersection] = True
    
    for vertex in graph[intersection]:
      nextIntersection, factor = vertex
      
      heappush(priorityQueue, (size * factor, nextIntersection))
      
  print('%.4f' % fraction[-1])