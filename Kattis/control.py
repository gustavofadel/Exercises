# coding: utf-8

from sys import setrecursionlimit

setrecursionlimit(100000)

def find (x):
  if parent[x] < 0:
    return x
    
  parent[x] = find(parent[x])
  return parent[x]
  
def join (x, y):
  x, y = find(x), find(y)
  
  if x != y:
    parent[x] += parent[y]
    parent[y] = x
    
def size (x):
  return -parent[find(x)]

n = int(input())
parent = [-1 for i in range(500001)]
recipes = 0

for i in range(n):
  a = list(map(int, input().split()[1:]))
  s = set(find(x) for x in a)
  
  if sum(size(x) for x in s) == len(a):
    recipes += 1
    
    for i in range(1, len(a)):
      join(a[0], a[i])

print(recipes)