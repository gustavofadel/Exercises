# coding: utf-8

from math import sqrt

def find (x):
  if parent[x] != x:
    parent[x] = find(parent[x])
    
  return parent[x]
  
def join (distance, x, y):
  x, y = find(x), find(y)
  
  if x != y:
    distances.append(distance)
    parent[x] = y

for ct in range(int(input())):
  s, p = map(int, input().split())
  distances = list()
  edges = list()
  graph = [list(map(int, input().split())) for i in range(p)]
  parent = list(range(p))
  
  for i, (xa, ya) in enumerate(graph):
    for j, (xb, yb) in enumerate(graph[i + 1:]):
      edges.append((sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb)), i, i + j + 1))
      
  edges.sort()
  
  for i in range(len(edges)):
    if len(distances) == p - s:
      break
    
    join(*edges[i])
    
  print('%.2f' % distances[-1])