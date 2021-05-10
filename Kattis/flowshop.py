# coding: utf-8

n, m = map(int, input().split())
p = [list(map(int, input().split())) for i in range(n)]

for i in range(1, n):
  p[i][0] += p[i - 1][0]
  
for j in range(1, m):
  p[0][j] += p[0][j - 1]
  
for i in range(1, n):
  for j in range(1, m):
    p[i][j] += max(p[i][j - 1], p[i - 1][j])
    
for i in range(n):
  print(p[i][-1], end = ' ')