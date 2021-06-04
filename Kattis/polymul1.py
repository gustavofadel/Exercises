# coding: utf-8

for case in range(int(input())):
  [n, a], [m, b] = [[int(input()), list(map(int, input().split()))] for i in range(2)]
  p = [0 for i in range(n + m + 1)]
  
  for i in range(n + 1):
    for j in range(m + 1):
      p[i + j] += a[i] * b[j]
      
  print(n + m, ' '.join(map(str, p)), sep = '\n')