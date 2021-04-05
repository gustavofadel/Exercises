# coding: utf-8

n = int(input())
d = list(map(int, input().split()))
lineup = [1 for i in range(n)]

for i, v in enumerate(d):
  lineup[v + 1] = i + 2
  
print(*lineup, sep = ' ')