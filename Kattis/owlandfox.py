# coding: utf-8

for ct in range(int(input())):
  n = list(map(int, list(input())))
  i = len(n) - 1
  
  while n[i] == 0:
    i -= 1
    
  n[i] -= 1
  
  print(int(''.join([str(i) for i in n])))