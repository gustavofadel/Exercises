# coding: utf-8

from collections import defaultdict
from heapq import heappush, heappop

n, t = map(int, input().split())
people = defaultdict(list)

for i in range(n):
  cash, time = map(int, input().split())
  people[time].append(cash)
  
queue = list()
maximumAmount = 0

for i in range(t - 1, -1, -1):
  for price in people[i]:
    heappush(queue, -price)
    
  if len(queue) > 0:
    maximumAmount += heappop(queue)
    
print(abs(maximumAmount))