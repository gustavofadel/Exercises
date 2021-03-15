# coding: utf-8

from heapq import heappush, heappop

while True:
  n, m = map(int, input().split())
  
  if n == m == 0:
    break
  
  graph = [list() for i in range(n)]
  
  for i in range(m):
    u, v, w = map(int, input().split())
    
    graph[u].append((v, w))
    graph[v].append((u, w))
  
  cost = 0
  inTree = [False for i in range(n)]
  priorityQueue = list()
  tree = list()
  
  inTree[0] = True
  
  for neighbor, weight in graph[0]:
    heappush(priorityQueue, (weight, (0, neighbor)))
    
  while len(priorityQueue) > 0:
    weight, edge = heappop(priorityQueue)
    
    if inTree[edge[1]]:
      continue
    
    inTree[edge[1]] = True
    cost += weight
    tree.append((min(edge), max(edge)))
    
    for neighbor, neighborWeight in graph[edge[1]]:
      if not inTree[neighbor]:
        heappush(priorityQueue, (neighborWeight, (edge[1], neighbor)))
        
  if len(tree) < n - 1:
    print('Impossible')
    
  else:
    tree.sort()
    
    print(cost)
    
    for i in range(len(tree)):
      print(*tree[i], sep = ' ')