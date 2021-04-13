# coding: utf-8

n, m = map(int, input().split())
degree = [0 for i in range(n + 1)]
graph = [list() for i in range(n + 1)]
processed = list()
queue = list()

for i in range(m):
  a, b = map(int, input().split())
  graph[a].append(b)
  degree[b] += 1
  
for i in range(1, n + 1):
  if degree[i] == 0:
    queue.append(i)
    
while len(queue) > 0:
  front = queue.pop(0)
  processed.append(front)
  
  for neighbor in graph[front]:
    degree[neighbor] -= 1
    
    if degree[neighbor] == 0:
      queue.append(neighbor)
      
print(*processed, sep = '\n') if len(processed) == n else print('IMPOSSIBLE')