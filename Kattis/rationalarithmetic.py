# coding: utf-8

def gcd (x, y):
  while y:
    x, y = y, x % y
    
  return x
  
def lcm (x, y):
  return x * y // gcd(x, y)

for ct in range(int(input())):
  x1, y1, op, x2, y2 = input().split()
  x1, y1, x2, y2 = map(int, [x1, y1, x2, y2])
  
  if op == '+':
    y = lcm(y1, y2)
    x = y // y1 * x1 + y // y2 * x2
    
  elif op == '-':
    y = lcm(y1, y2)
    x = y // y1 * x1 - y // y2 * x2
    
  elif op == '*':
    y = y1 * y2
    x = x1 * x2
    
  else:
    y = y1 * x2
    x = x1 * y2
    
  g = gcd(x, y)
  x, y = x // g, y // g
  
  if y < 0:
    x, y = -x, -y
  
  print(x, '/', y)