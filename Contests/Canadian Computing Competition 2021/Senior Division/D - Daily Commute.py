# coding: utf-8

from collections import deque
from heapq import heappop, heappush

n, w, d = map(int, input().split())
graph = [list() for i in range(n + 1)]

for i in range(w):
  a, b = map(int, input().split())
  graph[b].append(a)
  
stations = list(map(int, input().split()))
distance = [float('inf') for i in range(n + 1)]
distance[-1] = 0
queue = deque([n])

while queue:
  vertex = queue.popleft()
  
  for neighbor in graph[vertex]:
    if distance[neighbor] == float('inf'):
      distance[neighbor] = distance[vertex] + 1
      queue.append(neighbor)
      
heap = list()
minutes = list()

for i in range(n):
  heappush(heap, (distance[stations[i]] + i, i, stations[i]))

for i in range(d):
  x, y = [z - 1 for z in map(int, input().split())]
  stations[x], stations[y] = stations[y], stations[x]
  
  heappush(heap, (distance[stations[x]] + x, x, stations[x]))
  heappush(heap, (distance[stations[y]] + y, y, stations[y]))
  
  while True:
    time, index, station = heap[0]
    
    if stations[index] == station:
      minutes.append(time)
      break
    
    heappop(heap)
    
print('\n'.join(map(str, minutes)))