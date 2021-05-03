# coding: utf-8

for ct in range(int(input())):
  k, n = map(int, input().split())
  p = q = 1
  
  for bit in bin(n)[3:]:
    if bit == '0':
      q += p
      
    else:
      p += q
      
  print(k, '/'.join(map(str, [p, q])))