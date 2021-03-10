# coding: utf-8

def moveLeft ():
  for i in range(4):
    for j in range(4):
      if grid[i][j] != 0:
        if j != 0:
          k = j - 1
          
          while grid[i][k] == 0 and k > 0:
            k -= 1
            
          if grid[i][k] == 0:
            grid[i][k], grid[i][j] = grid[i][j], 0
            
          elif grid[i][k] == grid[i][j]:
            grid[i][k], grid[i][j] = -2 * grid[i][j], 0
            
          elif k + 1 != j:
            grid[i][k + 1], grid[i][j] = grid[i][j], 0
            
def moveUp ():
  for j in range(4):
    for i in range(4):
      if grid[i][j] != 0:
        if i != 0:
          k = i - 1
          
          while grid[k][j] == 0 and k > 0:
            k -= 1
            
          if grid[k][j] == 0:
            grid[k][j], grid[i][j] = grid[i][j], 0
            
          elif grid[k][j] == grid[i][j]:
            grid[k][j], grid[i][j] = -2 * grid[i][j], 0
            
          elif k + 1 != i:
            grid[k + 1][j], grid[i][j] = grid[i][j], 0
            
def moveRight ():
  for i in range(4):
    for j in range(4):
      j = 3 - j
      
      if grid[i][j] != 0:
        if j != 3:
          k = j + 1
          
          while grid[i][k] == 0 and k < 3:
            k += 1
            
          if grid[i][k] == 0:
            grid[i][k], grid[i][j] = grid[i][j], 0
            
          elif grid[i][k] == grid[i][j]:
            grid[i][k], grid[i][j] = -2 * grid[i][j], 0
            
          elif k - 1 != j:
            grid[i][k - 1], grid[i][j] = grid[i][j], 0
            
def moveDown ():
  for j in range(4):
    for i in range(4):
      i = 3 - i
      
      if grid[i][j] != 0:
        if i != 3:
          k = i + 1
          
          while grid[k][j] == 0 and k < 3:
            k += 1
            
          if grid[k][j] == 0:
            grid[k][j], grid[i][j] = grid[i][j], 0
            
          elif grid[k][j] == grid[i][j]:
            grid[k][j], grid[i][j] = -2 * grid[i][j], 0
            
          elif k - 1 != i:
            grid[k - 1][j], grid[i][j] = grid[i][j], 0

grid = [list(map(int, input().split())) for i in range(4)]
operation = int(input())

if operation == 0:
  moveLeft()
  
elif operation == 1:
  moveUp()
  
elif operation == 2:
  moveRight()
  
else:
  moveDown()
  
for i in range(4):
  for j in range(4):
    if j > 0:
      print(' ', end = '')
      
    print(abs(grid[i][j]), end = '')
    
  print()