# coding: utf-8

from collections import defaultdict
from math import sqrt
from sys import stdin, stdout

def squareDistance (x1, y1, x2, y2):
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)

c = int(stdin.readline().strip())
xList = defaultdict(list)

for i in range(c):
  x, y = map(int, stdin.readline().strip().split())
  xList[x].append(y)
  
xKeys = sorted(xList.keys())
coordinates = list()

for x in xKeys:
  coordinates.append(sorted(xList[x]))
  
squareLongest = 0

for i in range(len(xKeys)):
  x1 = xKeys[i]
  y1Min = coordinates[i][0]
  y1Max = coordinates[i][-1]
  
  for j in range(i, len(xKeys)):
    x2 = xKeys[j]
    y2Min = coordinates[j][0]
    y2Max = coordinates[j][-1]
    
    squareLongest = max(squareLongest, squareDistance(x1, y1Min, x2, y2Max), squareDistance(x1, y1Max, x2, y2Min))
    
stdout.write('%f' % sqrt(squareLongest) + '\n')