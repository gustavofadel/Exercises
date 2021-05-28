# coding: utf-8

def calculateArea (x1, y1, x2, y2, x3, y3):
  return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2

[x1, y1], [x2, y2], [x3, y3] = [list(map(int, input().split())) for i in range(3)]
count = 0
triangleArea = calculateArea(x1, y1, x2, y2, x3, y3)

for i in range(int(input())):
  x, y = map(int, input().split())
  count += int(triangleArea == calculateArea(x, y, x1, y1, x2, y2) + calculateArea(x, y, x1, y1, x3, y3) + calculateArea(x, y, x2, y2, x3, y3))
  
print('%.1f\n%d' % (triangleArea, count))