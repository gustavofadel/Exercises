# coding: utf-8

def shakes (i, j):
  count = 0
  
  for x in range(-1, 2):
    for y in range(-1, 2):
      if x == y == 0:
        continue
      
      nx, ny = x + i, y + j
      
      if 0 <= nx < r and 0 <= ny < s and grid[nx][ny] == 'o':
        count += 1
      
  return count

r, s = map(int, input().split())
grid = [list(input()) for i in range(r)]
row = column = -1
maxShakes = totalShakes = 0

for i in range(r):
  for j in range(s):
    if grid[i][j] == '.' and shakes(i, j) > maxShakes:
      row, column, maxShakes = i, j, shakes(i, j)
      
if row != -1 and column != -1:
  grid[row][column] = 'o'
  
for i in range(r):
  for j in range(s):
    if grid[i][j] == 'o':
      totalShakes += shakes(i, j)
      
print(totalShakes // 2)