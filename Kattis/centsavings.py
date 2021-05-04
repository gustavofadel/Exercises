# coding: utf-8

def roundToNearest (x):
  lastDigit = x % 10
  return x + (10 - lastDigit) if lastDigit >= 5 else x - lastDigit

infinity = float('inf')
n, d = map(int, input().split())
p = list(map(int, input().split()))
dp = [[infinity for j in range(d + 1)] for i in range(n + 1)]

for j in range(d + 1):
  dp[0][j] = 0
  
for i in range(1, n + 1):
  dp[i][0] = dp[i - 1][0] + p[i - 1]
  
for i in range(1, n + 1):
  for j in range(d, 0, -1):
    dp[i][j] = min(dp[i - 1][j] + p[i - 1], roundToNearest(dp[i - 1][j - 1] + p[i - 1]))
    
print(min(roundToNearest(x) for x in dp[-1]))