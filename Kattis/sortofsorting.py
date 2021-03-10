# coding: utf-8

while True:
  n = int(input())
  
  if n == 0:
    break
  
  names = [input() for i in range(n)]
  
  for i in range(n - 1):
    for j in range(n - i - 1):
      if names[j][0] > names[j + 1][0]:
        names[j], names[j + 1] = names[j + 1], names[j]
      
      elif names[j][0] == names[j + 1][0]:
        if names[j][1] > names[j + 1][1]:
          names[j], names[j + 1] = names[j + 1], names[j]
          
  print(*names, sep = '\n', end = '\n\n')