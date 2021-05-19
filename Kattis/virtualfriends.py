# coding: utf-8

def find (x):
  if parent[x] != x:
    parent[x] = find(parent[x])
    
  return parent[x]
  
def join (x, y):
  x, y = find(x), find(y)
  
  if x != y:
    parent[x] = y
    rank[y] += rank[x]
    rank[x] = 0

for case in range(int(input())):
  f = int(input())
  current = 1
  group = dict()
  parent = [i for i in range(2 * f + 1)]
  rank = [1 for i in range(2 * f + 1)]
  
  for i in range(f):
    friends = input().split()
    
    if friends[0] not in group:
      group[friends[0]] = current
      current += 1
      
    if friends[1] not in group:
      group[friends[1]] = current
      current += 1
      
    join(group[friends[0]], group[friends[1]])
    print(rank[find(group[friends[0]])])