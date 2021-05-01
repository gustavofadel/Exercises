# coding: utf-8

def getSum (n):
  if n <= 0:
    return 0
    
  if (n + 1) % 10 == 0:
    return 45 * ((n + 1) // 10) + 10 * getSum(n // 10)
    
  else:
    return sum(int(d) for d in str(n)) + getSum(n - 1)

for ct in range(int(input())):
  a, b = map(int, input().split())
  print(getSum(b) - getSum(a - 1))