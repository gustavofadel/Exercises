# coding: utf-8

def gcdExtended (a, b):
  if b == 0:
    return a, 1, 0
    
  else:
    gcd, u, v = gcdExtended(b, a % b)
    
    return gcd, v, u - (a // b) * v
  
def modularInverse (a, m):
  gcd, x, y = gcdExtended(a, m)
  
  return -1 if gcd != 1 else x % m
  
while True:
  n, t = map(int, input().split())
  
  if n == t == 0:
    break
  
  for i in range(t):
    x, op, y = input().split()
    x, y = int(x), int(y)
    
    if op == '+':
      print((x + y) % n)
      
    elif op == '-':
      print((x - y + n) % n)
      
    elif op == '*':
      print((x * y) % n)
      
    else:
      z = modularInverse(y, n)
      
      if z == -1:
        print(-1)
        
      else:
        print((x * z) % n)