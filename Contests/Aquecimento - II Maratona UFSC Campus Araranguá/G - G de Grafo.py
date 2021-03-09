# coding: utf-8

def find (x):
  if pai[x] == x:
    return x
  
  pai[x] = find(pai[x])
  return pai[x]
  
def join (x, y):
  x, y = find(x), find(y)
  
  pai[y] = x
  
def kruskal ():
  res = 0
  
  for w, u, v in arestas:
    if find(u) != find(v):
      join(u, v)
      res += w
      
  return 2 * res

n, m = map(int, input().split())
o = int(input())
pai = [i for i in range(n + 1)]
arestas = list()

for i in range(m):
  u, v, w = map(int, input().split())
  arestas.append((w, u, v))
  
arestas.sort()

print(kruskal())