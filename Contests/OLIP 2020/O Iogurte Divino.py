# coding: utf-8

from collections import defaultdict

def knapsack (vol, val, cap):
  mp = defaultdict(list)
  n = len(vol)
  res = 0  
  
  for i in range(n):
    mp[val[i] / vol[i]].append(i)
  
  for it in sorted(mp.keys(), reverse=True):
    for i in mp[it]:
      frac = cap / vol[i]
      
      if cap >= 0 and cap >= vol[i]:
        res += val[i]
        cap -= vol[i]
        
      elif cap < vol[i]:
        res += frac * val[i]
        return res
  
  return res
  
t = int(input())

for i in range(t):
  n, x = map(int, input().split())
  val = [0 for i in range(n)]
  vol = [0 for i in range(n)]
  inp = list()
  
  while len(inp) < 2 * n:
    line = list(map(int, input().split()))
    
    for y in line:
      inp.append(y)
  
  for i in range(2 * n):
    if i % 2 == 0:
      val[i // 2] = inp[i]
      
    else:
      vol[i // 2] = inp[i]
    
  print('%.2f' % knapsack(vol, val, x))