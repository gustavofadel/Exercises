# coding: utf-8

x = dict()
y = dict()

for i in range(3):
  a, b = map(int, input().split())
  
  if a in x:
    x[a] += 1
    
  else:
    x[a] = 1
    
  if b in y:
    y[b] += 1
    
  else:
    y[b] = 1
    
for a in x:
  if x[a] == 1:
    print(a, end = ' ')
    break

for b in y:
  if y[b] == 1:
    print(b)
    break