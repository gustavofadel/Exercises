# coding: utf-8

n = int(input())
a = list(map(int, input().split()))
b = [0 for i in range(n)]

for i, x in enumerate(list(map(int, input().split()))):
  b[a[i] - 1] = x
  
seen = [False for i in range(n)]
swaps = n

for i in range(n):
  if not seen[i]:
    swaps -= 1
    j = i
    
    while not seen[j]:
      seen[j] = True
      j = b[j] - 1
      
print('Impossible') if swaps & 1 else print('Possible')