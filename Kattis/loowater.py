# coding: utf-8

while True:
  n, m = map(int, input().split())
  
  if n == m == 0:
    break
  
  heads = sorted([int(input()) for i in range(n)])
  knights = sorted([int(input()) for i in range(m)])
  coins = i = j = 0
  
  while i < len(heads) and j < len(knights):
    if heads[i] <= knights[j]:
      coins += knights[j]
      i += 1
      
    j += 1
    
  print(coins) if i == len(heads) else print('Loowater is doomed!')