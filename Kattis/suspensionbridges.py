# coding: utf-8

from math import cosh, sinh

d, s = map(int, input().split())
lower, higher = 0.00000001, 10000000000

while higher - lower > 0.0000000001:
  mid = (lower + higher) / 2
  
  if mid + s < mid * cosh(d / (2 * mid)):
    lower = mid
    
  else:
    higher = mid
    
print(2 * mid * sinh(d / (2 * mid)))