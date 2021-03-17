# coding: utf-8

from sys import setrecursionlimit

setrecursionlimit(50000)

direction = [[0, 1], [1, 0], [0, -1], [-1, 0]]

def dfs (x, y):
  global pieces
  
  if not (0 <= x < h and 0 <= y < w):
    return
  
  if grid[x][y] == '#' or visited[x][y]:
    return
  
  if grid[x][y] == 'G':
    pieces += 1
    
  visited[x][y] = True
  
  for a, b in direction:
    if grid[x + a][y + b] == 'T':
      return
    
  for a, b in direction:
    dfs(x + a, y + b)

w, h = map(int, input().split())
found = False
grid = [input() for i in range(h)]
visited = [[False for j in range(w)] for i in range(h)]
pieces = 0

for i in range(h):
  for j in range(w):
    if grid[i][j] == 'P':
      dfs(i, j)
      found = True
      break
    
  if found:
    break
  
print(pieces)