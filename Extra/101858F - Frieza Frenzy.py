# coding: utf-8
 
from collections import deque
 
def find (x):
  if parent[x] != x:
    parent[x] = find(parent[x])
    
  return parent[x]
  
def join (x, y):
  global n
  
  x, y = find(x), find(y)
  
  if x != y:
    if rank[x] < rank[y]:
      x, y = y, x
      
    elif rank[x] == rank[y]:
      rank[x] += 1
      
    parent[y] = x
    n -= 1
 
n, m = map(int, input().split())
parent = list(range(n + 1))
rank = [0 for i in range(n + 1)]
edges = [list(map(int, input().split())) for i in range(m)]
roads = [x - 1 for x in map(int, input().split())]
connected = deque()
 
for i in range(m - 1, -1, -1):
  connected.appendleft(n)
  join(*edges[roads[i]])
  
print('\n'.join(map(str, connected)))