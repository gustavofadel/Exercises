# coding: utf-8

def clockwise (p1, p2, p3):
  (x1, y1), (x2, y2), (x3, y3) = p1, p2, p3
  
  return ((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1)) > 0
  
def getConvexHull (points):
  upperHull = [points[0], points[1]]
  lowerHull = [points[-1], points[-2]]
  
  for i in range(n - 2, -1, -1):
    while len(lowerHull) > 1 and not clockwise(points[i], lowerHull[-1], lowerHull[-2]):
      lowerHull.pop()
      
    lowerHull.append(points[i])
    
  for i in range(2, n):
    while len(upperHull) > 1 and not clockwise(points[i], upperHull[-1], upperHull[-2]):
      upperHull.pop()
      
    upperHull.append(points[i])
    
  convexHull = (upperHull + lowerHull[1:-1])[::-1]
  
  if convexHull[0] == convexHull[-1]:
    convexHull = convexHull[1:]
    
  return convexHull

while True:
  n = int(input())
  
  if n == 0:
    break
  
  points = list()
  
  for i in range(n):
    x, y = map(int, input().split())
    points.append((x, y))
    
  points.sort()
  
  if len(points) > 1:
    convexHull = getConvexHull(points)
    
  else:
    convexHull = points
    
  print(len(convexHull))
  
  for x, y in convexHull:
    print(x, y)