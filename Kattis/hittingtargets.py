# coding: utf-8

m = int(input())
circles = list()
rectangles = list()

for i in range(m):
  target = input().split()
  
  if target[0] == 'circle':
    circles.append(list(map(int, target[1:])))
  
  else:
    rectangles.append(list(map(int, target[1:])))
    
n = int(input())

for i in range(n):
  x, y = map(int, input().split())
  hits = 0
  
  for xc, yc, rc in circles:
    if (x - xc) * (x - xc) + (y - yc) * (y - yc) <= rc * rc:
      hits += 1
      
  for xa, ya, xb, yb in rectangles:
    if xa <= x <= xb and ya <= y <= yb:
      hits += 1
      
  print(hits)