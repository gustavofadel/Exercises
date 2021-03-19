# coding: utf-8

direction = [[-1, -1], [-1, 0], [-1, 1], [0, -1], [0, 1], [1, -1], [1, 0], [1, 1]]

def dfs (x, y):
  visited[x][y] = True
  
  for a, b in direction:
    nx, ny = a + x, b + y
    
    if 0 <= nx < m and 0 <= ny < n and grid[nx][ny] == '#' and not visited[nx][ny]:
      dfs(nx, ny)

m, n = map(int, input().split())
grid = [input() for i in range(m)]
loops = 0
visited = [[False for j in range(n)] for i in range(m)]

for i in range(m):
  for j in range(n):
    if grid[i][j] == '#' and not visited[i][j]:
      dfs(i, j)
      loops += 1
      
print(loops)