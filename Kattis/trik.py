# coding: utf-8

cups = [1, 0, 0]
moves = input()

for i in range(len(moves)):
  if moves[i] == 'A':
    cups[0], cups[1] = cups[1], cups[0]
    
  elif moves[i] == 'B':
    cups[1], cups[2] = cups[2], cups[1]
    
  else:
    cups[0], cups[2] = cups[2], cups[0]
    
print(cups.index(1) + 1)