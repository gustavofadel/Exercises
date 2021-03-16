# coding: utf-8

from heapq import heappop

for ct in range(int(input())):
  input()
  
  ng, nm = map(int, input().split())
  godzilla = list(map(int, input().split()))
  mechagodzilla = list(map(int, input().split()))
  
  while len(godzilla) > 0 and len(mechagodzilla) > 0:
    if mechagodzilla[0] <= godzilla[0]:
      heappop(mechagodzilla)
      
    else:
      heappop(godzilla)
      
  if len(godzilla) > len(mechagodzilla):
    print('Godzilla')
    
  elif len(godzilla) == len(mechagodzilla):
    print('uncertain')
    
  else:
    print('MechaGodzilla')