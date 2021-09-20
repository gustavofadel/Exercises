# coding: utf-8

grid = [[1, 2], [3, 4]]
s = input()

for c in s:
  if c == 'H':
    grid[0], grid[1] = grid[1], grid[0]
    
  else:
    grid[0][0], grid[1][0], grid[0][1], grid[1][1] = grid[0][1], grid[1][1], grid[0][0], grid[1][0]
    
for i in range(2):
  print(*grid[i])