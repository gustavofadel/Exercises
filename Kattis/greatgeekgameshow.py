# coding: utf-8

n, k = map(int, input().split())
dp = [1 for i in range(n + 1)]
currentSum = k

for i in range(k + 1, n + 1):
  dp[i] = currentSum / i
  currentSum += dp[i] - dp[i - k]
  
print('%.6f' % dp[-1])