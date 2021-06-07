# coding: utf-8

n = int(input())
grid = [list(map(int, input().split())) for i in range(n)]

for i in range(n):
  for j in range(n):
    if grid[i][j] == 1:
      for x in range(-1, 2):
        for y in range(-1, 2):
          nx, ny = x + i, y + j
          
          if 0 <= nx < n and 0 <= ny < n:
            if grid[nx][ny] == 0:
              grid[nx][ny] = 2
              
for i in range(n):
  print(*grid[i])