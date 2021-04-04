# coding: utf-8

from collections import defaultdict

for ct in range(int(input())):
  n = int(input())
  d = defaultdict(int)
  
  for i in range(n):
    s, x = input().split()
    d[s] += int(x)
  
  a = list()
  
  for k in d:
    a.append((-d[k], k))
    
  a.sort()
  
  print(len(a))
  
  for f, s in a:
    print(s, -f)