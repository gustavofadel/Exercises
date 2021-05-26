# coding: utf-8

def inBoard (i, j):
  return (0 <= i < 5 and 0 <= j < 5)

def isValid ():
  direction = [(-2, 1), (-1, 2), (-2, -1), (-1, -2), (1, -2), (1, 2), (2, -1), (2, 1)]
  
  for i in range(5):
    for j in range(5):
      if board[i][j] == 'k':
        for x, y in direction:
          if inBoard(i + x, j + y) and board[i + x][j + y] == 'k':
            return 'invalid'
            
  return 'valid'

board = [input() for i in range(5)]
knights = sum(board[i].count('k') for i in range(5))

print(isValid() if knights == 9 else 'invalid')