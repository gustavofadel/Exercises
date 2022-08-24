# coding: utf-8
 
s, n = map(int, input().split())
dragons = list()
 
for i in range(n):
  x, y = map(int, input().split())
  dragons.append((x, y))
  
dragons.sort()
 
for x, y in dragons:
  if s > x:
    s += y
    
  else:
    print('NO')
    exit()
    
print('YES')