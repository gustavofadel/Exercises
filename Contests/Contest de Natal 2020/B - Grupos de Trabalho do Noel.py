# coding: utf-8

n = int(input())
a = b = d = m = 0

for i in range(n):
  e, g, h = input().split()
  h = int(h)
  
  if g == 'bonecos':
    b += h
    
  elif g == 'arquitetos':
    a += h
    
  elif g == 'musicos':
    m += h
    
  else:
    d += h
    
total = b // 8 + a // 4 + m // 6 + d // 12

print(total)