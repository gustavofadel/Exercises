# coding: utf-8

from heapq import heappush, heappop

while True:
  n, m, q, s = map(int, input().split())
  
  if n == m == q == s == 0:
    break
  
  distances = [10 ** 9 for i in range(n)]
  graph = [list() for i in range(n)]
  
  for i in range(m):
    u, v, w = map(int, input().split())
    graph[u].append((v, w))
    
  priorityQueue = list()  
  
  distances[s] = 0
  heappush(priorityQueue, (0, s))
  
  while len(priorityQueue) > 0:
    node = heappop(priorityQueue)[1]
    
    for neighbor, weight in graph[node]:
      if distances[neighbor] > distances[node] + weight:
        distances[neighbor] = distances[node] + weight
        heappush(priorityQueue, (distances[neighbor], neighbor))
        
  for i in range(q):
    node = int(input())
    
    print(distances[node]) if distances[node] != 10 ** 9 else print('Impossible')
    
  print()