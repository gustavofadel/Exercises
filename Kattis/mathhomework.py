# coding: utf-8

b, c, d, l = map(int, input().split())
possible = False

for i in range(l // b + 1):
  for j in range(l // c + 1):
    if b * i + c * j > l:
      break
    
    for k in range(l // d + 1):
      if b * i + c * j + d * k > l:
        break
      
      elif b * i + c * j + d * k == l:
        print(i, j, k)
        possible = True
        
if not possible:
  print('impossible')