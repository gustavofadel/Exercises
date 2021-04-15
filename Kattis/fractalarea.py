# coding: utf-8

from math import pi

def area (r, n):
  if n == 1:
    return r * r
    
  else:
    return area(r, n - 1) + 4 * pow(3, n - 2) * pow(r / pow(2, n - 1), 2)
  
for ct in range(int(input())):
  r, n = map(int, input().split())
  
  print(pi * area(r, n))