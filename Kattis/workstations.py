# coding: utf-8

from heapq import heappush, heappop

n, m = map(int, input().split())
arrivals = list()
departures = list()
unlockings = 0

for i in range(n):
  a, s = map(int, input().split())
  heappush(arrivals, a)
  heappush(departures, a + s)
  
while len(arrivals) > 0:
  top = heappop(arrivals)
  
  while top - departures[0] > m:
    heappop(departures)
    
  if departures[0] <= top:
    heappop(departures)
    unlockings += 1

print(unlockings)