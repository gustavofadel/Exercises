# coding: utf-8

from math import floor, sqrt

def distance (x1, y1, x2, y2):
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))

cx, cy, n = map(int, input().split())
distances = list()

for i in range(n):
  x, y, r = map(int, input().split())
  distances.append(distance(cx, cy, x, y) - r)
  
distances.sort()

print(max(0, floor(distances[2])))