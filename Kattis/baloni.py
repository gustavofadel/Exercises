# coding: utf-8

from collections import defaultdict

d = defaultdict(int)
n = int(input())
times = 0

for h in list(map(int, input().split())):
  if d[h + 1] > 0:
    d[h + 1] -= 1
    
  else:
    times += 1
    
  d[h] += 1
  
print(times)