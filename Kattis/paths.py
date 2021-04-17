# coding: utf-8

n, m, k = map(int, input().split())
colors = [0] + list(map(int, input().split()))
dp = [[0 for j in range(n + 1)] for i in range(32)]
graph = [list() for i in range(n + 1)]
paths = 0

for i in range(1, n + 1):
  colors[i] -= 1
  dp[1 << colors[i]][i] = 1

for i in range(m):
  a, b = map(int, input().split())
  graph[a].append(b)
  graph[b].append(a)
  
for i in range(2, 1 << k):
  if i == (i & -i):
    continue
  
  for j in range(1, n + 1):
    if (i >> colors[j]) & 1:
      for k in graph[j]:
        dp[i][j] += dp[i ^ (1 << colors[j])][k]
        
    paths += dp[i][j]
    
print(paths)