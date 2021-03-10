# coding: utf-8

def canAttack (x, y):
  for i in range(x - 1, -1, -1):
    if board[i][y] == '*':
      return True
      
  for i in range(x + 1, 8):
    if board[i][y] == '*':
      return True
    
  for j in range(y - 1, -1, -1):
    if board[x][j] == '*':
      return True
      
  for j in range(y + 1, 8):
    if board[x][j] == '*':
      return True
      
  i, j = x - 1, y - 1
  
  while i >= 0 and j >= 0:
    if board[i][j] == '*':
      return True
    
    i -= 1
    j -= 1
    
  i, j = x + 1, y + 1
  
  while i < 8 and j < 8:
    if board[i][j] == '*':
      return True
      
    i += 1
    j += 1
      
  i, j = x - 1, y + 1
  
  while i >= 0 and j < 8:
    if board[i][j] == '*':
      return True
      
    i -= 1
    j += 1
    
  i, j = x + 1, y - 1
  
  while i < 8 and j >= 0:
    if board[i][j] == '*':
      return True
      
    i += 1
    j -= 1
    
  return False

board = [input() for i in range(8)]
positions = list()

for i in range(8):
  for j in range(8):
    if board[i][j] == '*':
      positions.append((i, j))
      
if len(positions) != 8:
  print('invalid')
  
else:
  valid = True
  
  for position in positions:
    if canAttack(position[0], position[1]):
      valid = False
      break
  
  print('valid') if valid else print('invalid')