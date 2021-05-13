# coding: utf-8

for case in range(1, int(input()) + 1):
  n, t = map(int, input().split())
  e = int(input())
  possible = True
  towns = [list() for i in range(n)]
  vehicles = [0 for i in range(n)]
  
  for i in range(e):
    h, p = map(int, input().split())
    towns[h - 1].append(p)
    
  for i in range(n):
    if i == t - 1:
      vehicles[i] = 0
      
    else:
      count = 0
      employees = len(towns[i])
      
      for passengers in sorted(towns[i], reverse = True):
        if employees <= 0:
          break
        
        count += 1
        employees -= passengers
        
      if employees > 0:
        possible = False
        break
      
      vehicles[i] = count
      
  print('Case #%d:' % case, end = ' ')
  print(' '.join(map(str, vehicles)) if possible else 'IMPOSSIBLE')