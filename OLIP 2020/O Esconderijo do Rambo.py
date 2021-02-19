# coding: utf-8

n, m = map(int, input().split())
cont = 0
grafo = [list() for i in range(n)]

for i in range(m):
  u, v = map(int, input().split())
  grafo[u].append(v)
  grafo[v].append(u)
  
for i in range(n):
  if len(grafo[i]) > 0 and len(grafo[i]) % 2 == 0:
    cont += 1
    
print('Rambo esta salvo') if cont == n else print('Rambo esta perdido')