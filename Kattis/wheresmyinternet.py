# coding: utf-8

from sys import setrecursionlimit

setrecursionlimit(50000)

def dfs (vertex):
  visited[vertex] = True
  
  for adjacent in graph[vertex]:
    if not visited[adjacent]:
      dfs(adjacent)

n, m = map(int, input().split())
graph = [list() for i in range(n)]
visited = [False for i in range(n)]

for i in range(m):
  a, b = map(int, input().split())
  
  a -= 1
  b -= 1
  
  graph[a].append(b)
  graph[b].append(a)
  
dfs(0)

notConnected = list()

for i in range(n):
  if not visited[i]:
    notConnected.append(i + 1)
    
print(*notConnected, sep = '\n') if len(notConnected) > 0 else print('Connected')