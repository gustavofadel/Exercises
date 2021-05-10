# coding: utf-8

for case in range(int(input())):
  n = int(input())
  pack = list()
  
  for i in range(n, 0, -1):
    pack.insert(0, i)
    
    for j in range(i):
      pack.insert(0, pack.pop())
      
  print(*pack)