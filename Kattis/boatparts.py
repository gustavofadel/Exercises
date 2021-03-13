# coding: utf-8

p, n = map(int, input().split())
day = -1
parts = set()

for i in range(1, n + 1):
  w = input()
  
  parts.add(w)
  
  if len(parts) == p and day == -1:
    day = i
    
print(day) if day != -1 else print('paradox avoided')