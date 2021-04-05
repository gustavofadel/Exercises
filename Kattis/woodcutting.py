# coding: utf-8

for ct in range(int(input())):
  n = int(input())
  w = sorted(sum(map(int, input().split()[1:])) for i in range(n))
  total = time = 0
  
  for i in range(len(w)):
    time += w[i]
    total += time
    
  print(total / len(w))