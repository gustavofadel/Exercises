# coding: utf-8

from math import sqrt

order = [list(map(int, input().split())) for i in range(3)]
distance = 0
position = dict()

for i in range(3):
  for j in range(3):
    position[order[i][j]] = (i, j)
    
for i in range(1, 9):
  (x1, y1), (x2, y2) = position[i], position[i + 1]
  distance += abs(x1 - x2) if y1 == y2 else abs(y1 - y2) if x1 == x2 else sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))
  
print(distance)