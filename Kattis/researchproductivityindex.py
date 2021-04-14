# coding: utf-8

n = int(input())
a = sorted([p / 100 for p in list(map(int, input().split()))], reverse = True)
dp = [[0 for j in range(n + 1)] for i in range(n + 1)]
dp[0][0] = 1

for i in range(1, n + 1):
  dp[i][0] = dp[i - 1][0] * (1 - a[i - 1])
  
for i in range(1, n + 1):
  for j in range(1, i + 1):
    dp[i][j] = dp[i - 1][j - 1] * a[i - 1] + dp[i - 1][j] * (1 - a[i - 1])

print(max([sum(dp[i][j] * (j ** (j / i)) for j in range(1, i + 1)) for i in range(1, n + 1)]))