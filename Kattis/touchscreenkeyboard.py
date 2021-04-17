# coding: utf-8

def manhattanDistance (x1, y1, x2, y2):
  return abs(x1 - x2) + abs(y1 - y2)

keyboard = ['qwertyuiop', 'asdfghjkl', 'zxcvbnm']
position = dict()

for i in range(3):
  for j in range(len(keyboard[i])):
    position[keyboard[i][j]] = (i, j)

for ct in range(int(input())):
  typed, l = input().split()
  distances = list()
  
  for i in range(int(l)):
    spell = input()
    total = 0
    
    for j in range(len(spell)):
      x1, y1 = position[typed[j]]
      x2, y2 = position[spell[j]]
      total += manhattanDistance(x1, y1, x2, y2)
    
    distances.append((total, spell))
  
  for distance, word in sorted(distances):
    print(word, distance)