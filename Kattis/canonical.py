# coding: utf-8

infinity = float('inf')
n = int(input())
coins = list(map(int, input().split()))
length = coins[-1] + coins[-2] + 1
dp = [infinity for i in range(length)]
greedy = [infinity for i in range(length)]
dp[0] = greedy[0] = k = 0

for i in range(1, length):
  while k < n - 1 and coins[k + 1] <= i:
    k += 1
    
  greedy[i] = greedy[i - coins[k]] + 1
  
  for j in range(n):
    if coins[j] > i:
      break
    
    dp[i] = min(dp[i], dp[i - coins[j]] + 1)
    
  if dp[i] != greedy[i]:
    print('non-canonical')
    exit()
    
print('canonical')