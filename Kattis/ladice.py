# coding: utf-8

from sys import stdin, stdout

def find (x):
  if parent[x] != x:
    parent[x] = find(parent[x])
    
  return parent[x]
  
def join (x, y):
  x, y = find(x), find(y)
  
  if x == y:
    return
  
  if rank[x] < rank[y]:
    parent[x] = y
    
  elif rank[x] > rank[y]:
    parent[y] = x
    
  else:
    parent[y] = x
    rank[y] += 1

n, l = map(int, stdin.readline().strip().split())
empty = [1 for i in range(l + 1)]
parent = list(range(l + 1))
rank = [0 for i in range(l + 1)]

for i in range(n):
  a, b = map(int, stdin.readline().strip().split())
  
  if find(a) != find(b):
    boxes = empty[find(a)] + empty[find(b)]
    join(a, b)
    empty[find(a)] = boxes
    
  if empty[find(a)] > 0:
    empty[find(a)] -= 1
    stdout.write('LADICA\n')
    
  else:
    stdout.write('SMECE\n')