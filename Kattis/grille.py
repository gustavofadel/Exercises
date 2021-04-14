# coding: utf-8

def rotate ():
  for i in range(n):
    for j in range(i + 1, n):
      grille[i][j], grille[j][i] = grille[j][i], grille[i][j]
      
  for i in range(n):
    for j in range(n // 2):
      grille[i][j], grille[i][n - j - 1] = grille[i][n - j - 1], grille[i][j]

n = int(input())
grille = [list(input()) for i in range(n)]
decrypted = [[0 for j in range(n)] for i in range(n)]
encrypted = input()
index = 0

for k in range(4):
  for i in range(n):
    for j in range(n):
      if grille[i][j] == '.':
        if decrypted[i][j] != 0:
          print('invalid grille')
          exit()
          
        else:
          decrypted[i][j] = encrypted[index]
          index += 1
          
  rotate()
  
if index != n * n:
  print('invalid grille')
  
else:
  for i in range(n):
    print(''.join(decrypted[i]), end = '')
    
  print()