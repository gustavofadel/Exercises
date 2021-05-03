# coding: utf-8

from math import ceil

for ct in range(int(input())):
  k, fraction = input().split()
  p, q = map(int, fraction.split('/'))
  
  if q == 1:
    print(k, '/'.join(map(str, [1, p + 1])))
    
  else:
    count = 0
    
    if p > q:
      count = ceil((p - q) / q)
      p -= q * count
      
    q -= p
    p += q
    
    if count > 0:
      q += p * count
      
    print(k, '/'.join(map(str, [p, q])))