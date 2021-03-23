# coding: utf-8

for ct in range(int(input())):
  n = int(input())
  dvds = list(map(int, input().split()))
  operations = 0
  position = 1
  
  for i in range(n):
    if dvds[i] == position:
      position += 1
      
    else:
      operations += 1
      
  print(operations)