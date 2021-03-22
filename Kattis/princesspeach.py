# coding: utf-8

n, y = map(int, input().split())
k = [int(input()) for i in range(y)]
found = set()

for i in range(y):
  found.add(k[i])
  
for i in range(n):
  if i not in found:
    print(i)
    
print('Mario got', len(found), 'of the dangerous obstacles.')