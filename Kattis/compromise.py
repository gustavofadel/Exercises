# coding: utf-8

for case in range(int(input())):
  n, m = map(int, input().split())
  setBits = [0 for i in range(m)]
  
  for i in range(n):
    b = input()
    
    for j in range(m):
      setBits[j] += int(b[j])
      
  for i in range(m):
    print(int(setBits[i] >= n / 2), end = '')
  
  print()