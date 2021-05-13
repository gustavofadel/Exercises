# coding: utf-8

from fractions import gcd
from sys import stdin, stdout

def rotateNormal (normal):
  if normal[1] < 0 or (normal[1] == 0 and normal[0] < 0):
    normal = (-normal[0], -normal[1])
    
  return normal
  
n = int(stdin.readline().strip())
normals = dict()

for i in range(n):
  x1, y1, x2, y2 = map(int, stdin.readline().strip().split())
  dx, dy = x2 - x1, y2 - y1
  g = gcd(abs(dx), abs(dy))
  dx, dy = dx // g, dy // g
  normal = rotateNormal((-dy, dx))
  distance = x1 * normal[0] + y1 * normal[1]
  normals.setdefault(normal, list()).append(distance)

normalsDifferences = dict()

for normal, distances in normals.items():
  distancesDifferences = dict()
  
  for i in range(len(distances)):
    for j in range(i + 1, len(distances)):
      difference = abs(distances[i] - distances[j])
      distancesDifferences[difference] = distancesDifferences.get(difference, 0) + 1
      
  normalsDifferences[normal] = distancesDifferences
  
count = 0

for normal, distancesDifferences in normalsDifferences.items():
  perpendicular = rotateNormal((normal[1], -normal[0]))
  perpendicularDifferences = normalsDifferences.get(perpendicular, dict())
  
  for difference, differenceCount in distancesDifferences.items():
    count += differenceCount * perpendicularDifferences.get(difference, 0)

stdout.write(str(count // 2) + '\n')