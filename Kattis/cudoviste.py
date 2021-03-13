# coding: utf-8

r, c = map(int, input().split())
grid = [input() for i in range(r)]
spaces = [0 for i in range(5)]

for i in range(r - 1):
  for j in range(c - 1):
    if grid[i][j] == '#' or grid[i][j + 1] == '#' or grid[i + 1][j] == '#' or grid[i + 1][j + 1] == '#':
      continue
    
    cars = (grid[i][j] == 'X') + (grid[i][j + 1] == 'X') + (grid[i + 1][j] == 'X') + (grid[i + 1][j + 1] == 'X')
    spaces[cars] += 1

print(*spaces, sep = '\n')