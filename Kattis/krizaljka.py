# coding: utf-8

a, b = input().split()
n, m = len(a), len(b)
grid = [['.' for j in range(m)] for i in range(n)]
found = False

for i in range(n):
  for j in range(m):
    if a[i] == b[j]:
      ni, nj = i, j
      found = True
      break
    
  if found:
    break
  
for i in range(n):
  grid[i][nj] = a[i]
  
for j in range(m):
  grid[ni][j] = b[j]
  
for j in range(m):
  for i in range(n):
    print(grid[i][j], end = '')
    
  print()