# coding: utf-8

l, x = map(int, input().split())
denied = terrace = 0

for i in range(x):
  event, p = input().split()
  p = int(p)
  
  if event == 'enter':
    if terrace + p > l:
      denied += 1
      
    else:
      terrace += p
      
  else:
    terrace -= p
    
print(denied)