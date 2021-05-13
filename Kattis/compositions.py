# coding: utf-8

def compositions (n, m, k, memoization = dict()):
  if (n, m, k) not in memoization:
    if n == 0:
      return 1
      
    result = 0
    
    for i in range(n, 0, -1):
      if i % k != m:
        result += compositions(n - i, m, k, memoization)
        
    memoization[(n, m, k)] = result
    
  return memoization[(n, m, k)]

for i in range(int(input())):
  case, n, m, k = map(int, input().split())
  print(case, compositions(n, m, k))