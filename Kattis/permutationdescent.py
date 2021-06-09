# coding: utf-8

dp = [[0 for j in range(101)] for i in range(101)]
modulo = 1001113

for i in range(101):
  dp[i][0] = dp[0][i] = 1
  
for i in range(1, 101):
  for j in range(1, 101):
    dp[i][j] = (dp[i - 1][j] * (j + 1) + dp[i][j - 1] * (i + 1)) % modulo
    
for case in range(1, int(input()) + 1):
  k, n, v = map(int, input().split())
  print(case, dp[n - v - 1][v])