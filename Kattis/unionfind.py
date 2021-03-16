# coding: utf-8

from sys import stdin, stdout

def find (x):
  if parent[x] == x:
    return x
    
  parent[x] = find(parent[x])
  
  return parent[x]
  
def join (x, y):
  x, y = find(x), find(y)
  
  if rank[x] < rank[y]:
    parent[x] = y
    
  elif rank[x] == rank[y]:
    parent[y] = x
    rank[x] += 1
    
  else:
    parent[y] = x

n, q = map(int, stdin.readline().strip().split())
parent = [i for i in range(n)]
rank = [0 for i in range(n)]

for i in range(q):
  operation, a, b = stdin.readline().strip().split()
  a, b = int(a), int(b)
  
  if operation == '=':
    join(a, b)
    
  else:
    stdout.write('yes\n') if find(a) == find(b) else stdout.write('no\n')