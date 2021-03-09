# coding: utf-8

n = int(input())
tabuleiro = [[0 for j in range(10)] for i in range(10)]
valido = True

for i in range(n):
  d, l, r, c = map(int, input().split())
  r -= 1
  c -= 1
  
  if d == 0:
    if 0 <= c + l - 1 < 10:
      for j in range(c, c + l):
        if tabuleiro[r][j] == 1:
          valido = False
          break
        
      if valido:
        for j in range(c, c + l):
          tabuleiro[r][j] = 1
          
    else:
      valido = False
      
  else:
    if 0 <= r + l - 1 < 10:
      for i in range(r, r + l):
        if tabuleiro[i][c] == 1:
          valido = False
          break
        
      if valido:
        for i in range(r, r + l):
          tabuleiro[i][j] = 1
          
print('Y') if valido else print('N')