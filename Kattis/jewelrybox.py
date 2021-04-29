# coding: utf-8

from math import sqrt

for ct in range(int(input())):
  x, y = map(int, input().split())
  h1 = (4 * (x + y) - sqrt(16 * (x + y) * (x + y) - 48 * x * y)) / 24
  h2 = (4 * (x + y) + sqrt(16 * (x + y) * (x + y) - 48 * x * y)) / 24
  
  print(max((x - 2 * h1) * (y - 2 * h1) * h1, (x - 2 * h2) * (y - 2 * h2) * h2))