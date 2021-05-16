# coding: utf-8

t = int(input())
equipaments = 0

for i in range(13, -1, -1):
  while t >= (1 << i):
    t -= (1 << i)
    equipaments += 1
    
  if t == 0:
    break
  
print(equipaments)