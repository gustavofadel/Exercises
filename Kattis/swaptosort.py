# coding: utf-8

def find (x):
  if parent[x] == -1:
    return x
  
  parent[x] = find(parent[x])
  return parent[x]
  
def join (x, y):
  x = find(x)
  y = find(y)
  
  if x != y:
    parent[x] = y

n, k = map(int, input().split())
parent = [-1 for i in range(n)]
possible = True

for i in range(k):
  a, b = map(int, input().split())
  join(a - 1, b - 1)
  
for i in range(n):
  if find(i) != find(n - i - 1):
    possible = False
    break

print('Yes') if possible else print('No')