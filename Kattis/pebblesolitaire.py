# coding: utf-8

def nextMove (game):
  for i in range(len(game) - 2):
    if game[i : i + 3] == '-oo':
      updateGame = game[:i] + 'o' + game[i + 1:]
      updateGame = updateGame[:i + 1] + '-' + updateGame[i + 2:]
      updateGame = updateGame[:i + 2] + '-' + updateGame[i + 3:]
      nextMove(updateGame)
      
    if game[i : i + 3] == 'oo-':
      updateGame = game[:i] + '-' + game[i + 1:]
      updateGame = updateGame[:i + 1] + '-' + updateGame[i + 2:]
      updateGame = updateGame[:i + 2] + 'o' + updateGame[i + 3:]
      nextMove(updateGame)
      
  pebbles.append(game.count('o'))

for ct in range(int(input())):
  board = input()
  pebbles = list()
  
  nextMove(board)
  
  print(min(pebbles))