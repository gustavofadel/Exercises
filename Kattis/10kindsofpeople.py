# coding: utf-8

from sys import setrecursionlimit

setrecursionlimit(1000000)

def find (x):
  if parent[x] == x:
    return x
    
  parent[x] = find(parent[x])
  return parent[x]
  
def join (x, y):
  x, y = find(x), find(y)
  
  if x != y:
    parent[x] = y

r, c = map(int, input().split())
board = [list(input()) for i in range(r)]
parent = list(range(r * c))

for i in range(r):
  for j in range(c):
    if j < c - 1 and board[i][j] == board[i][j + 1]:
      join(i * c + j, i * c + j + 1)
      
    if i < r - 1 and board[i][j] == board[i + 1][j]:
      join(i * c + j, (i + 1) * c + j)
      
n = int(input())

for i in range(n):
  r1, c1, r2, c2 = map(lambda x: int(x) - 1, input().split())
  
  if find(r1 * c + c1) == find(r2 * c + c2):
    print('decimal') if board[r1][c1] == '1' else print('binary')
    
  else:
    print('neither')