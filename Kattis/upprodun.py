# coding: utf-8

n, m = [int(input()) for i in range(2)]

for i in range(m % n):
  for j in range(m // n + 1):
    print('*', end = '')
    
  print()
  
for i in range(m % n, n):
  for j in range(m // n):
    print('*', end = '')
    
  print()