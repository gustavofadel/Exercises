# coding: utf-8

from math import sqrt

def distance (x1, y1, x2, y2):
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))

x, y, x1, y1, x2, y2 = map(int, input().split())
points = [[x1, y1], [x2, y1], [x1, y2], [x2, y2]]

if x1 < x < x2:
  points.append([x, y1])
  points.append([x, y2])
  
if y1 < y < y2:
  points.append([x1, y])
  points.append([x2, y])
  
print(min(distance(x, y, points[i][0], points[i][1]) for i in range(len(points))))