# coding: utf-8

from math import pi, tan

for ct in range(int(input())):
  n, l, d, g = map(int, input().split())
  
  print(0.25 * n * l * l * (1 / tan(pi / n)) + n * l * d * g + (g * d) * (g * d) * pi)