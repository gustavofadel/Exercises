# coding: utf-8

from math import pi

while True:
  r, m, c = map(float, input().split())
  
  if r == m == c == 0:
    break
  
  print(pi * r * r, 4 * (c / m) * r * r)