# coding: utf-8

from sys import setrecursionlimit

setrecursionlimit(50000)

def dfs (i, j):
  if not (0 <= i < m and 0 <= j < n):
    return
  
  if grid[i][j] == '#' or visited[i][j]:
    return
  
  visited[i][j] = True
  
  dfs(i - 1, j)
  dfs(i, j + 1)
  dfs(i + 1, j)
  dfs(i, j - 1)

case = 1

while True:
  try:
    m, n = map(int, input().split())
    grid = [input() for i in range(m)]
    visited = [[False for j in range(n)] for i in range(m)]
    stars = 0
    
    for i in range(m):
      for j in range(n):
        if grid[i][j] == '-' and not visited[i][j]:
          stars += 1
          dfs(i, j)
    
    print('Case %d:' % case, stars)
    
    case += 1
    
  except EOFError:
    break