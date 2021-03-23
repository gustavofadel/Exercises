# coding: utf-8

for ct in range(int(input())):
  line = list(map(int, input().split()))
  m, coordinates = line[0], line[1:]
  points = list()
  
  for i in range(0, 2 * m, 2):
    x, y = coordinates[i], coordinates[i + 1]
    points.append((x, y))
    
  sum1 = sum2 = 0
  
  for i in range(m - 1):
    sum1 += points[i][0] * points[i + 1][1]
    sum2 += points[i][1] * points[i + 1][0]
    
  sum1 += points[-1][0] * points[0][1]
  sum2 += points[0][0] * points[-1][1]
  
  area = (sum1 - sum2) / 2
  
  print(area)