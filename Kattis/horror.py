# coding: utf-8

from collections import deque

n, h, l = map(int, input().split())
x = list(map(int, input().split()))
graph = [list() for i in range(n)]

for i in range(l):
  a, b = map(int, input().split())
  graph[a].append(b)
  graph[b].append(a)
  
distances = [float('inf') for i in range(n)]
queue = deque((0, start) for start in x)
  
for start in x:
  distances[start] = 0
    
while len(queue) > 0:
  distance, vertex = queue.pop()
    
  for neighbor in graph[vertex]:
    if distances[neighbor] > distance + 1:
      distances[neighbor] = distance + 1
      queue.appendleft((distance + 1, neighbor))
      
highest = 0

for i in range(1, n):
  if distances[i] > distances[highest]:
    highest = i
    
print(highest)