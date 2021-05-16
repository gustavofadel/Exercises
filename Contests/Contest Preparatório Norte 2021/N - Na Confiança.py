# coding: utf-8

n, r = map(int, input().split())
graph = [[0 for j in range(n)] for i in range(n)]

for i in range(n):
  graph[i][i] = 1

for i in range(r):
  x, y = map(int, input().split())
  graph[x - 1][y - 1] = graph[y - 1][x - 1] = 1
  
toBeEstablished = 0

for i in range(n):
  toBeEstablished += graph[i].count(0)
  
print(toBeEstablished // 2)