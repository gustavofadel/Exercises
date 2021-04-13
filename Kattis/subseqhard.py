# coding: utf-8

for ct in range(int(input())):
  input()
  n = int(input())
  a = list(map(int, input().split()))
  d = dict()
  count = currentSum = 0
  
  for i in range(n):
    d[currentSum] = d.get(currentSum, 0) + 1
    currentSum += a[i]
    
    if currentSum - 47 in d:
      count += d[currentSum - 47]
      
  print(count)