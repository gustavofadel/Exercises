# coding: utf-8

board = [input() for i in range(7)]
moves = 0

for i in range(7):
  for j in range(len(board[i])):
    if board[i][j] == 'o':
      if i > 1 and board[i - 1][j] == 'o' and board[i - 2][j] == '.':
        moves += 1
      
      if j > 1 and board[i][j - 1] == 'o' and board[i][j - 2] == '.':
        moves += 1
        
      if i < 5 and board[i + 1][j] == 'o' and board[i + 2][j] == '.':
        moves += 1
        
      if j < len(board[i]) - 2 and board[i][j + 1] == 'o' and board[i][j + 2] == '.':
        moves += 1
        
print(moves)