# coding: utf-8

from math import pi

while True:
  d, v = map(int, input().split())
  
  if d == v == 0:
    break
  
  print((d * d * d - 6 * v / pi) ** (1 / 3))