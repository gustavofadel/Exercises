# coding: utf-8

from sys import stdin

for line in stdin:
  i = j = 0
    
  while i < len(line) - 2:
    if line[i] == '0' and (line[i + 1] == 'x' or line[i + 1] == 'X'):
      j = i + 2
        
      while j < len(line) - 1 and ('a' <= line[j] <= 'f' or 'A' <= line[j] <= 'F' or '0' <= line[j] <= '9'):
        j += 1
          
      if j != i + 2:
        print(line[i : j], int(line[i : j], 16))
          
      i = j
        
    else:
      i += 1