# coding: utf-8

def dfs (u):
  if visited[u]:
    return
  
  visited[u] = True
  
  for v in graph[u]:
    dfs(v)

for ct in range(int(input())):
  n, m, l = map(int, input().split())
  graph = [list() for i in range(n)]
  visited = [False for i in range(n)]
  
  for i in range(m):
    x, y = map(int, input().split())
    graph[x - 1].append(y - 1)
    
  for i in range(l):
    z = int(input())
    dfs(z - 1)
    
  print(sum(visited))