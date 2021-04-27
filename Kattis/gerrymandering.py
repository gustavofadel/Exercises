# coding: utf-8

p, d = map(int, input().split())
m = [[0 for j in range(2)] for i in range(d)]

for i in range(p):
  x, y, z = map(int, input().split())
  m[x - 1][0] += y
  m[x - 1][1] += z
  
a = b = votes = 0

for i in range(d):
  x, y = m[i]
  z = (x + y) // 2 + 1
  votes += x + y
  
  if x > y:
    print('A', x - z, y)
    a += x - z
    b += y
    
  else:
    print('B', x, y - z)
    a += x
    b += y - z
    
print(abs(a - b) / votes)