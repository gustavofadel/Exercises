# coding: utf-8

n = int(input())
states = list()

for i in range(n):
  e, a, g = input().split()
  
  if float(a) <= 0.7 * float(g):
    states.append(e)
    
print('\n'.join(states) if states else '*')