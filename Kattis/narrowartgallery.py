# coding: utf-8

def solve (x, y, z):
  if x == n:
    return 0
    
  if dp[x][y][z] != -1:
    return dp[x][y][z]
    
  dp[x][y][z] = 0
  
  if z < k:
    dp[x][y][z] = a[x][y] + solve(x + 1, y, z + 1)
    
  if k - z < n - x:
    dp[x][y][z] = max(dp[x][y][z], a[x][y] + a[x][y ^ 1] + solve(x + 1, y, z), a[x][y] + a[x][y ^ 1] + solve(x + 1, y ^ 1, z))
    
  return dp[x][y][z]

while True:
  n, k = map(int, input().split())
  
  if n == k == 0:
    break
  
  a = [list(map(int, input().split())) for i in range(n)]
  dp = [[[-1 for l in range(k + 1)] for j in range(2)] for i in range(n + 1)]
  
  print(max(solve(0, 0, 0), solve(0, 1, 0)))