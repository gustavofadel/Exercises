# coding: utf-8

while True:
  numbers = list(map(float, input().split()))
  
  if numbers[0] == 0:
    break
  
  x1, y1, x2, y2, p = numbers
  distance = (abs(x1 - x2) ** p + abs(y1 - y2) ** p) ** (1 / p)
  
  print(distance)