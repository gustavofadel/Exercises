# coding: utf-8

for case in range(int(input())):
  n, m = map(int, input().split())
  prizes = [list(map(int, input().split()[1:])) for i in range(n)]
  collected = list(map(int, input().split()))
  total = 0
  
  for i in range(n):
    total += prizes[i][-1] * min(collected[required - 1] for required in prizes[i][:-1])
    
  print(total)