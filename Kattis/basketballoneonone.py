# coding: utf-8

game = input()
a = b = 0
first = ''

for i in range(0, len(game), 2):
  player, points = game[i], int(game[i + 1])
  
  if player == 'A':
    a += points
  
  else:
    b += points
    
  if a >= 11 and a - b >= 2:
    print('A')
    break
  
  if b >= 11 and b - a >= 2:
    print('B')
    break