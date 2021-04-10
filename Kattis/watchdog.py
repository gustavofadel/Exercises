# coding: utf-8

def squareDistance (x1, y1, x2, y2):
  return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)

for ct in range(int(input())):
  s, h = map(int, input().split())
  found = False
  hatches = set()
  
  for i in range(h):
    x, y = map(int, input().split())
    hatches.add((x, y))
    
  for i in range(1, s + 1):
    for j in range(1, s + 1):
      if (i, j) not in hatches and all(squareDistance(i, j, x, y) <= min(min(i, s - i) ** 2, min(j, s - j) ** 2) for x, y in hatches):
        print(i, j)
        found = True
        break
      
    if found:
      break
    
  if not found:
    print('poodle')