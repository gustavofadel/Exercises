# coding: utf-8

def check (a, w, v):
  if a[0] > w / 2:
    return False
    
  for i in range(1, len(a)):
    if a[i] - a[i - 1] > w:
      return False
      
  return a[-1] >= v - (w / 2)

while True:
  nx, ny, w = map(float, input().split())
  
  if nx == ny == w == 0:
    break
  
  x, y = [sorted(map(float, input().split())) for i in range(2)]
  
  print('YES' if check(x, w, 75) and check(y, w, 100) else 'NO')