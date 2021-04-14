# coding: utf-8

while True:
  line = list(map(int, input().split()))
  
  if line[0] == 0:
    break
  
  n, values = line[0], line[1:]
  total = sum(values)
  capacity = total // 2
  dp = [[0 for j in range(capacity + 1)] for i in range(n + 1)]
  
  for i in range(n + 1):
    for j in range(capacity + 1):
      if i == 0 or j == 0:
        dp[i][j] = 0
        
      elif values[i - 1] > j:
        dp[i][j] = dp[i - 1][j]
        
      else:
        dp[i][j] = max(dp[i - 1][j], values[i - 1] + dp[i - 1][j - values[i - 1]])
        
  print(total - dp[-1][-1], dp[-1][-1])