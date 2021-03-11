# coding: utf-8

n = int(input())
inside = list()

for i in range(n):
  action, name = input().split()
  
  if action == 'entry':
    print(name, 'entered', end = '')
    
    if name in inside:
      print(' (ANOMALY)', end = '')
    
    else:
      inside.append(name)
      
    print()
    
  else:
    print(name, 'exited', end = '')
    
    if name not in inside:
      print(' (ANOMALY)', end = '')
      
    else:
      inside.remove(name)
      
    print()