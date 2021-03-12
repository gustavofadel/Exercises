# coding: utf-8

from collections import defaultdict

while True:
  n = int(input())
  
  if n == 0:
    break
  
  items = defaultdict(list)
  
  for i in range(n):
    line = input().split()
    
    for item in line[1:]:
      items[item].append(line[0])
      
  for key in sorted(items.keys()):
    print(key, end = ' ')
    print(*sorted(items[key]), sep = ' ')
    
  print()