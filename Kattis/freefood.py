# coding: utf-8

n = int(input())
days = set()

for i in range(n):
  s, t = map(int, input().split())
  
  for j in range(s, t + 1):
    days.add(j)
    
print(len(days))