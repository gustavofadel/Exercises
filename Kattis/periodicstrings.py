# coding: utf-8

def isPeriodic (k, s):
  if len(s) % k != 0:
    return False
    
  previous = s[:k]
  
  for i in range(0, len(s), k):
    current = s[i : i + k]
    
    if current != previous:
      return False
      
    previous = previous[-1] + previous[:-1]
    
  return True
  
s = input()

for i in range(1, len(s) + 1):
  if isPeriodic(i, s):
    print(i)
    break