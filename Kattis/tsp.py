# coding: utf-8

from math import sqrt

def dist (a, b):
  x1, y1 = points[a]
  x2, y2 = points[b]
  
  return sqrt((x1 - x2) * (x1 - x2) + (x2 - y2) * (x2 - y2))

n = int(input())
points = list()

for i in range(n):
  points.append(list(map(float, input().split())))
  
tour = [0 for i in range(n)]
used = [False for i in range(n)]
used[0] = True

for i in range(1, n):
  best = -1
  
  for j in range(n):
    if not used[j] and (best == -1 or dist(tour[i - 1], j) < dist(tour[i - 1], best)):
      best = j
      
  tour[i] = best
  used[best] = True

print(*tour, sep = '\n')