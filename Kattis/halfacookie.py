# coding: utf-8

from math import acos, pi, sqrt

while True:
  try:
    r, x, y = map(float, input().split())
    
    if x * x + y * y >= r * r:
      print('miss')
      
    else:
      angle = acos(sqrt(x * x + y * y) / r)
      sector = angle * r * r
      triangle = sqrt(x * x + y * y) * sqrt(r * r - x * x - y * y)
      smaller = sector - triangle
      larger = pi * r * r - smaller
      
      print(larger, smaller)
    
  except EOFError:
    break