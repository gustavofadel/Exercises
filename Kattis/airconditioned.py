# coding: utf-8

n = int(input())
minions = list()

for i in range(n):
  l, u = map(int, input().split())
  minions.append((u, l))
  
minions.sort()
upper = minions[0][0]
rooms = 1

for i in range(n):
  u, l = minions[i]
  
  if l > upper:
    upper = u
    rooms += 1
    
print(rooms)