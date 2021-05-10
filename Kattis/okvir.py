# coding: utf-8

m, n = map(int, input().split())
u, l, r, d = map(int, input().split())
puzzle = [input() for i in range(m)]
m += u + d
n += l + r
framed = [[' ' for j in range(n)] for i in range(m)]

for i in range(u, m - d):
  for j in range(l, n - r):
    framed[i][j] = puzzle[i - u][j - l]

for i in range(m):
  for j in range(n):
    if framed[i][j] == ' ':
      if i & 1 == 0:
        framed[i][j] = '#' if j & 1 == 0 else '.'
        
      else:
        framed[i][j] = '.' if j & 1 == 0 else '#'

for i in range(m):
  print(''.join(framed[i]))