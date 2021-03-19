# coding: utf-8

def gcd (x, y):
  while y > 0:
    x, y = y, x % y
    
  return x

n = int(input())
rings = list(map(int, input().split()))

for i in range(1, n):
  g = gcd(rings[0], rings[i])
  
  print('%d/%d' % (rings[0] // g, rings[i] // g))