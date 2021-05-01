# coding: utf-8

from math import cos, hypot, radians, sin

for ct in range(int(input())):
  n = int(input())
  angle = 90
  x = y = 0
  
  for i in range(n):
    command, value = input().split()
    value = int(value)
    
    if command == 'fd':
      x += value * cos(radians(angle))
      y += value * sin(radians(angle))
      
    elif command == 'bk':
      x -= value * cos(radians(angle))
      y -= value * sin(radians(angle))
      
    elif command == 'rt':
      angle = (angle + value) % 360
      
    else:
      angle = (angle - value) % 360
      
  print(round(hypot(x, y)))