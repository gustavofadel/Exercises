# coding: utf-8

r, c, zr, zc = map(int, input().split())
article = [input() for i in range(r)]
enlarged = [['' for j in range(c * zc)] for i in range(r * zr)]

for i in range(r):
  for j in range(c):
    for k in range(zr):
      for l in range(zc):
        enlarged[i * zr + k][j * zc + l] = article[i][j]
        
for row in enlarged:
  print(''.join(row))