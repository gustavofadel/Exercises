# coding: utf-8

direction = [[0, 1], [0, -1], [-1, 0], [1, 0]]

def bfs (i, j):
  global length
  
  queue = [[i, j]]
  visited[i][j] = True
  
  while len(queue) > 0:
    i, j = queue.pop(0)
    
    for a, b in direction:
      x, y = a + i, b + j
      
      if not (0 <= x < n and 0 <= y < m and not visited[x][y]):
        continue
      
      if grid[x][y] == '1':
        length += 1
        continue
      
      visited[x][y] = True
      queue.append([x, y])

n, m = map(int, input().split())
grid = [input() for i in range(n)]
visited = [[False for j in range(m)] for i in range(n)]
length = 0

for i in range(n):
  if grid[i][0] == '0':
    if not visited[i][0]:
      bfs(i, 0)
      
  else:
    length += 1
    
  if grid[i][-1] == '0':
    if not visited[i][-1]:
      bfs(i, m - 1)
      
  else:
    length += 1

for j in range(m):
  if grid[0][j] == '0':
    if not visited[0][j]:
      bfs(0, j)
      
  else:
    length += 1
    
  if grid[-1][j] == '0':
    if not visited[-1][j]:
      bfs(n - 1, j)
      
  else:
    length += 1
    
print(length)