# coding: utf-8

from math import floor, sqrt

for ct in range(int(input())):
  n = int(input())
  print(floor((sqrt(8 * n + 1) - 1) / 2))