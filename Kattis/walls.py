# coding: utf-8

l, w, n, r = map(int, input().split())
centres = [(-l / 2, 0), (l / 2, 0), (0, -w / 2), (0, w / 2)]
cranes = list()

for i in range(n):
  cranes.append(set())
  x, y = map(int, input().split())
  
  for j, (xc, yc) in enumerate(centres):
    if (x - xc) * (x - xc) + (y - yc) * (y - yc) <= r * r:
      cranes[i].add(j)
      
if max(len(c) for c in cranes) == 4:
  print(1)
  exit()
  
for i in range(n):
  for j in range(i + 1, n):
    if len(cranes[i] | cranes[j]) == 4:
      print(2)
      exit()
      
for i in range(n):
  for j in range(i + 1, n):
    for k in range(j + 1, n):
      if len(cranes[i] | cranes[j] | cranes[k]) == 4:
        print(3)
        exit()
        
for i in range(n):
  for j in range(i + 1, n):
    for k in range(j + 1, n):
      for l in range(k + 1, n):
        if len(cranes[i] | cranes[j] | cranes[k] | cranes[l]) == 4:
          print(4)
          exit()
          
print('Impossible')