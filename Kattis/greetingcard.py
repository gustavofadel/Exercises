# coding: utf-8

def count (x, y):
  a = list()
  a.append((x, y + 2018))
  a.append((x + 1118, y + 1680))
  a.append((x + 1680, y + 1118))
  a.append((x + 2018, y))
  a.append((x, y - 2018))
  a.append((x + 1118, y - 1680))
  a.append((x + 1680, y - 1118))
  total = 0
  
  for x, y in a:
    if (x, y) in s:
      total += 1
      
  return total

n = int(input())
s = set()
total = 0
v = list()

for i in range(n):
  x, y = map(int, input().split())
  v.append((x, y))
  s.add((x, y))
  
v.sort()

for x, y in v:
  total += count(x, y)
  s.remove((x, y))
  
print(total)