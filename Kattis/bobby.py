# coding: utf-8

def solve (i, j):
  if i > y:
    return 0
    
  if j >= x:
    return 1
    
  if dp[i][j] > 0:
    return dp[i][j]
    
  dp[i][j] = ((s - r + 1) * solve(i + 1, j + 1) + (r - 1) * solve(i + 1, j)) / s
  return dp[i][j]

for ct in range(int(input())):
  r, s, x, y, w = map(int, input().split())
  dp = [[0 for j in range(x)] for i in range(y + 1)]
  
  print('yes') if solve(0, 0) * w > 1 else print('no')