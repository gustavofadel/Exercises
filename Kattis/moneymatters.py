# coding: utf-8

from sys import setrecursionlimit

setrecursionlimit(50000)

def dfs (current):
  if visited[current]:
    return 0
    
  visited[current] = True
  totalSum = balances[current]
  
  for friend in friends[current]:
    totalSum += dfs(friend)
    
  return totalSum

n, m = map(int, input().split())
balances = [int(input()) for i in range(n)]
friends = [list() for i in range(n)]
visited = [False for i in range(n)]

for i in range(m):
  x, y = map(int, input().split())
  friends[x].append(y)
  friends[y].append(x)
  
possible = True

for i in range(n):
  if visited[i]:
    continue
  
  if dfs(i) != 0:
    possible = False
    break
  
print('POSSIBLE') if possible else print('IMPOSSIBLE')