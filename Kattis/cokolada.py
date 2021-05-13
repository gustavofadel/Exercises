# coding: utf-8

k = int(input())

if bin(k)[2:].count('1') == 1:
  print(k, 0)
  
else:
  size = 1
  
  while size < k:
    size <<= 1
    
  print(size, bin(k)[2:].rfind('1') + 1)