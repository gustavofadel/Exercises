# coding: utf-8

n, m = map(int, input().split())
masks = set()
total = 0

for i in range(m):
  a, b = map(int, input().split())
  a -= 1
  b -= 1
  masks.add((1 << a) + (1 << b))
  
for i in range(1 << n):
  valid = True
  
  for mask in masks:
    if (i & mask) == mask:
      valid = False
      break
    
  if valid:
    total += 1
    
print(total)