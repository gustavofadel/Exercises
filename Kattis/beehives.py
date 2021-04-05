# coding: utf-8

from math import sqrt

def hypotenuse (x1, y1, x2, y2):
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))

while True:
  d, n = map(float, input().split())
  n = int(n)
  
  if d == n == 0:
    break
  
  hives = list()
  
  for i in range(n):
    x, y = map(float, input().split())
    hives.append((x, y))
    
  sour = sweet = 0
  
  for i in range(n):
    fight = False
    
    for j in range(n):
      if i != j and hypotenuse(hives[i][0], hives[i][1], hives[j][0], hives[j][1]) < d:
        fight = True
        break
    
    if fight:
      sour += 1
      
    else:
      sweet += 1
    
  print(sour, 'sour,', sweet, 'sweet')