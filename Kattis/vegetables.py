# coding: utf-8

from math import ceil

def solve (k, curMin, curMax, curCuts):
  if k == n:
    return curCuts
    
  absMin = curMax * t
  absMax = curMin / t
  low = ceil(w[k] / absMax)
  high = int(w[k] / absMin)
  
  if k == 0:
    low = 1
    high = w[0]
    
  for i in range(low, high + 1):
    newL = w[k] / i
    
    if k == 0:
      curMin = curMax = newL
      
    answer = solve(k + 1, min(curMin, newL), max(curMax, newL), curCuts + i - 1)
    
    if answer != -1:
      return answer
  
  return -1

t, n = map(float, input().split())
n = int(n)
w = sorted(map(int, input().split()))

print(solve(0, w[0], w[0], 0))