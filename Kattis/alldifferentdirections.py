# coding: utf-8

from math import cos, hypot, radians, sin

while True:
  n = int(input())
  
  if n == 0:
    break
  
  averageX = averageY = 0
  destinations = list()
  
  for ct in range(n):
    directions = input().split()
    x, y, angle = map(float, directions[0 : 2] + [directions[3]])
    
    for i in range(4, len(directions), 2):
      if directions[i] == 'turn':
        angle += float(directions[i + 1])
        
      else:
        x += float(directions[i + 1]) * cos(radians(angle))
        y += float(directions[i + 1]) * sin(radians(angle))
        
    destinations.append((x, y))
    
  for x, y in destinations:
    averageX += x
    averageY += y
    
  averageX /= n
  averageY /= n
  maximumDistance = max([hypot(averageX - x, averageY - y) for x, y in destinations])
  
  print(averageX, averageY, maximumDistance)