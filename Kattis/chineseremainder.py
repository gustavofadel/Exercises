# coding: utf-8

def gcdExtended (a, b):
  if b == 0:
    return a, 1, 0
    
  else:
    gcd, u, v = gcdExtended(b, a % b)
    
    return gcd, v, u - (a // b) * v
  
for ct in range(int(input())):
  a, n, b, m = map(int, input().split())
  gcd, u, v = gcdExtended(n, m)
  x = a + u * n * (b - a)
  k = m * n
  
  print(x % k, k)