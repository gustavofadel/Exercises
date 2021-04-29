# coding: utf-8

from heapq import heappush, heappop
from math import ceil

infinity = float('inf')

class Edge:
  def __init__ (self, u, v, t0, p, d):
    self.u = u
    self.v = v
    self.t0 = t0
    self.p = p
    self.d = d
    
  def nextAvailable (self, t):
    if t <= self.t0:
      return self.t0 - t
      
    if self.p == 0:
      return None
    
    return ((ceil((t - self.t0) / self.p) * self.p) + self.t0) - t

while True:
  n, m, q, s = map(int, input().split())
  
  if n == m == q == s == 0:
    break
  
  graph = [list() for i in range(n)]
  
  for i in range(m):
    u, v, t0, p, d = map(int, input().split())
    graph[u].append(Edge(u, v, t0, p, d))
    
  distance = [infinity for i in range(n)]
  distance[s] = 0
  heap = [(0, s)]
  
  while len(heap) > 0:
    t, u = heappop(heap)
    
    if distance[u] < t:
      continue
    
    for v in graph[u]:
      nextAvailable = v.nextAvailable(t)
      
      if nextAvailable is None:
        continue
      
      if distance[v.v] > t + nextAvailable + v.d:
        distance[v.v] = t + nextAvailable + v.d
        heappush(heap, (t + nextAvailable + v.d, v.v))
  
  for i in range(q):
    t = int(input())
    print(distance[t]) if distance[t] != infinity else print('Impossible')
    
  print()