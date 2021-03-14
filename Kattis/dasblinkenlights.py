# coding: utf-8

def gcd (x, y):
  while y:
    x, y = y, x % y
    
  return x
  
def lcm (x, y):
  return x * y // gcd(x, y)

p, q, s = map(int, input().split())

print('yes') if lcm(p, q) <= s else print('no')