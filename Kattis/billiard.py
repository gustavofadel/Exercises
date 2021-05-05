# coding: utf-8

from math import atan, degrees, sqrt

while True:
  a, b, s, m, n = map(int, input().split())
  
  if a == b == s == m == n == 0:
    break
  
  x = a * m
  y = b * n
  angle = degrees(atan(y / x))
  distance = sqrt(x * x + y * y)
  
  print('%.2f %.2f' % (angle, distance / s))