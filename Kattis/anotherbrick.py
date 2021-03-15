# coding: utf-8

h, w, n = map(int, input().split())
x = list(map(int, input().split()))
complete = False
width = height = 0

for i in range(n):
  width += x[i]
  
  if width == w:
    width = 0
    height += 1
    
  if height == h:
    complete = True
    break
  
  if width > w:
    break
  
print('YES') if complete else print('NO')