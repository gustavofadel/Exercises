# coding: utf-8

while True:
  n = int(input()) - 1
  
  if n == -1:
    break
  
  elements = shifts = 0
  
  print('{', end = ' ')
  
  while n:
    if n & 1:
      print(', %d' % (3 ** shifts) if elements else '%d' % (3 ** shifts), end = '')
      elements += 1
      
    n >>= 1
    shifts += 1
    
  print(' }')