# coding: utf-8

from math import fabs, sqrt

for ct in range(int(input())):
  w, g, h, r = map(int, input().split())
  print(sqrt(w * w + fabs(g - h) * fabs(g - h)), sqrt(w * w + (g + h - 2 * r) * (g + h - 2 * r)))