# coding: utf-8

direction = [[1, 0], [-1, 0], [0, 1], [0, -1]]

def dfs (x, y):
  if visited[x][y]:
    return
  
  visited[x][y] = True
  
  for a, b in direction:
    nx, ny = x + a, y + b
    
    if not (0 <= nx < r and 0 <= ny < c):
      continue
    
    if grid[nx][ny] == 'L' or grid[nx][ny] == 'C':
      dfs(nx, ny)

r, c = map(int, input().split())
grid = [input() for i in range(r)]
visited = [[False for j in range(c)] for i in range(r)]
islands = 0

for i in range(r):
  for j in range(c):
    if grid[i][j] == 'L' and not visited[i][j]:
      dfs(i, j)
      islands += 1
      
print(islands)