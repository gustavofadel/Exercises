# coding: utf-8

def check (a, b):
  for i in range(26):
    if translate[i][a]:
      before = translate[i][b]
      translate[i][b] = True
      
      if not before:
        check(i, b)
        
    if translate[b][i]:
      before = translate[a][i]
      translate[a][i] = True
      
      if not before:
        check(a, i)

m, n = map(int, input().split())
translate = [[False for j in range(26)] for i in range(26)]

for i in range(26):
  translate[i][i] = True
  
for i in range(m):
  a, b = input().split()
  x, y = ord(a) - ord('a'), ord(b) - ord('a')
  before = translate[x][y]
  translate[x][y] = True
  
  if not before:
    check(x, y)
    
for i in range(n):
  a, b = input().split()
  match = True
  
  if len(a) != len(b):
    print('no')
    
  else:
    for i in range(len(a)):
      if not translate[ord(a[i]) - ord('a')][ord(b[i]) - ord('a')]:
        match = False
        break
      
    print('yes') if match else print('no')