# coding: utf-8

from collections import deque
from sys import stdin, stdout

def valid (i, j):
  return (1 <= i <= n and 1 <= j <= n)

def bfs ():
  direction = [(0, -1), (-1, 0), (0, 1), (1, 0)]
  queue = deque([(1, 1)])
  visited = [[False for j in range(n + 1)] for i in range(n + 1)]
  visited[1][1] = True
  
  while queue:
    x, y = queue.popleft()
    
    if x == y == n:
      return True
      
    for a, b in direction:
      nx, ny = x + a, y + b
      
      if not valid(nx, ny):
        continue
      
      if visited[nx][ny] or not grid[nx][ny]:
        continue
      
      visited[nx][ny] = True
      queue.append((nx, ny))
      
  return False

modulo = (1 << 31) - 1
n = int(stdin.readline().strip())
grid = [[0 for j in range(n + 1)] for i in range(n + 1)]
ways = [[0 for j in range(n + 1)] for i in range(n + 1)]
ways[1][1] = 1

for i in range(1, n + 1):
  tiles = stdin.readline().strip()
  
  for j in range(1, n + 1):
    grid[i][j] = (tiles[j - 1] == '.')
    
for i in range(1, n + 1):
  for j in range(1, n + 1):
    if i != 1 or j != 1:
      if grid[i][j]:
        ways[i][j] = (ways[i - 1][j] + ways[i][j - 1]) % modulo
        
      else:
        ways[i][j] = 0
        
if ways[-1][-1]:
  stdout.write(str(ways[-1][-1]) + '\n')
  
elif bfs():
  stdout.write('THE GAME IS A LIE\n')
  
else:
  stdout.write('INCONCEIVABLE\n')