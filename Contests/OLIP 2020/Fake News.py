# coding: utf-8

n = int(input())
dicio = dict()

for i in range(n):
  a, b = input().split()
  
  if a == 'add':
    aux = ''
    
    for c in b:
      aux += c
      
      if aux in dicio:
        dicio[aux] += 1
        
      else:
        dicio[aux] = 1
        
  else:
    if b in dicio:
      print(dicio[b])
      
    else:
      print(0)