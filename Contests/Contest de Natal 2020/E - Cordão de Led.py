# coding: utf-8

def dfs (u):
  if not vis[u]:
    vis[u] = True
    
    for v in adj[u]:
      dfs(v)

n, l = map(int, input().split())
conectado = True
vis = [False for i in range(n)]
adj = [list() for i in range(n)]

for i in range(l):
  x, y = map(int, input().split())
  adj[x-1].append(y-1)
  adj[y-1].append(x-1)

dfs(0)

for i in range(n):
  if vis[i] == False:
    conectado = False
    break
  
print('COMPLETO') if conectado else print('INCOMPLETO')