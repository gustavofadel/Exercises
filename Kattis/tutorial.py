# coding: utf-8

from math import factorial, log2

m, n, t = map(int, input().split())

if t == 1:
  if n >= 13:
    print('TLE')
    
  else:
    print('AC') if factorial(n) <= m else print('TLE')
  
elif t == 2:
  print('AC') if 2 ** n <= m else print('TLE')
  
elif t == 3:
  print('AC') if n ** 4 <= m else print('TLE')
  
elif t == 4:
  print('AC') if n ** 3 <= m else print('TLE')
  
elif t == 5:
  print('AC') if n ** 2 <= m else print('TLE')
  
elif t == 6:
  print('AC') if n * log2(n) <= m else print('TLE')
  
else:
  print('AC') if n <= m else print('TLE')