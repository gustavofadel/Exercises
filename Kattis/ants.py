# coding: utf-8

for ct in range(int(input())):
  l, n = map(int, input().split())
  ants = list()
  
  while len(ants) < n:
    ants.extend(list(map(int, input().split())))
    
  earliest = latest = 0
  
  for i in range(n):
    earliest = max(earliest, min(l - ants[i], ants[i]))
    latest = max(latest, max(l - ants[i], ants[i]))
    
  print(earliest, latest)