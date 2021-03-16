# coding: utf-8

from math import cos, sin

p, a, b, c, d, n = map(int, input().split())
decline = 0
maximum = p * (sin(a + b) + cos(c + d) + 2)

for k in range(2, n + 1):
  price = p * (sin(a * k + b) + cos(c * k + d) + 2)
  
  if price < maximum:
    decline = max(decline, maximum - price)
    
  else:
    maximum = price
  
print(decline)