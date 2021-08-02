# coding: utf-8

def solve (n, current = 0):
  if n == 1:
    print(current + 1)
  
  elif n % 2 == 0:
    solve(n // 2, current + n)
    
  else:
    solve(3 * n + 1, current + n)
    
solve(int(input()))