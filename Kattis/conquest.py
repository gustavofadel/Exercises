# coding: utf-8

from heapq import heappush, heappop

n, m = map(int, input().split())
graph = [list() for i in range(n)]
priorityQueue = list()
totalSize = 0
visited = [False for i in range(n)]

for i in range(m):
  u, v = map(int, input().split())
  u -= 1
  v -= 1
  graph[u].append(v)
  graph[v].append(u)
  
army = [int(input()) for i in range(n)]
heappush(priorityQueue, (army[0], 0))

while len(priorityQueue) > 0:
  size, vertex = heappop(priorityQueue)
  
  if size >= totalSize and vertex != 0:
    break
  
  if visited[vertex]:
    continue
  
  totalSize += size
  visited[vertex] = True
  
  for neighbor in graph[vertex]:
    heappush(priorityQueue, (army[neighbor], neighbor))
    
print(totalSize)