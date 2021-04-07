# coding: utf-8

from collections import defaultdict

n, c = map(int, input().split())
message = list(map(int, input().split()))
counter = defaultdict(int)
firstAppearence = dict()

for i, v in enumerate(message):
  counter[v] += 1
  
  if v not in firstAppearence:
    firstAppearence[v] = i
    
print(*sorted(message, key = lambda v: (-counter[v], firstAppearence[v])), sep = ' ')