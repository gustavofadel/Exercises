# coding: utf-8

from math import sqrt

n = int(input())
length = 0

for i in range(n):
  a, b, c = map(int, input().split())
  
  if a == b:
    length += c
  
  else:
    if a < b:
      a, b = b, a
      
    length += sqrt(c * c - (a * a - b * b) * (a * a - b * b) / (2 * a * a + 2 * b * b - c * c))

print(length)