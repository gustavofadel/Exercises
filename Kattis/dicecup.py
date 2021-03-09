# coding: utf-8

n, m = map(int, input().split())
frequency = dict()

for i in range(1, n + 1):
  for j in range(1, m + 1):
    if i + j in frequency:
      frequency[i + j] += 1
      
    else:
      frequency[i + j] = 1

higher = 0
values = list()

for key in frequency:
  if frequency[key] > higher:
    higher = frequency[key]
    values = [key]
    
  elif frequency[key] == higher:
    values.append(key)
    
values.sort()

print(*values, sep = '\n')