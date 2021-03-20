# coding: utf-8

while True:
  n = int(input())
  
  if n == 0:
    break
  
  vertices = list()
  
  for i in range(n):
    x, y = map(int, input().split())
    vertices.append((x, y))
    
  sum1 = sum2 = 0
  
  for i in range(n - 1):
    sum1 += vertices[i][0] * vertices[i + 1][1]
    sum2 += vertices[i][1] * vertices[i + 1][0]
    
  sum1 += vertices[-1][0] * vertices[0][1]
  sum2 += vertices[0][0] * vertices[-1][1]
  
  area = (sum1 - sum2) / 2
  
  print('CW' if area < 0 else 'CCW', '%.1f' % abs(area))