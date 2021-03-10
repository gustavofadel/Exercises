# coding: utf-8

from math import cos, radians, sin

g = 9.81
n = int(input())

for i in range(n):
  v0, angle, x, h1, h2 = map(float, input().split())
  t = x / (v0 * cos(radians(angle)))
  y = v0 * t * sin(radians(angle)) - 0.5 * g * t * t
  
  print('Safe') if y - h1 >= 1 and h2 - y >= 1 else print('Not Safe')