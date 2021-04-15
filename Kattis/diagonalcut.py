# coding: utf-8

def gcd (x, y):
  while y:
    x, y = y, x % y
    
  return x

m, n = map(int, input().split())
g = gcd(m, n)
m, n = m // g, n // g

if m % 2 == 0 or n % 2 == 0:
  g = 0
  
print(g)