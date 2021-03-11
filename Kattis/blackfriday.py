# coding: utf-8

n = int(input())
a = list(map(int, input().split()))
unique = sorted(set(a), reverse = True)
winner = None

for i in range(len(unique)):
  if a.count(unique[i]) == 1:
    winner = a.index(unique[i]) + 1
    break
  
print(winner) if winner is not None else print('none')