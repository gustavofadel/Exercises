# coding: utf-8

def busca (u):
  global cont
  
  if not visitado[u]:
    cont += 1
    visitado[u] = True
    
    for v in adj[u]:
      busca(v)

s, t, p = map(int, input().split())
altura = [0] + list(map(int, input().split()))
visitado = [False for i in range(s + 1)]
cont = 0
adj = [list() for i in range(s + 1)]

for i in range(t):
  a, b = map(int, input().split())
  
  if altura[a] > altura[b]:
    adj[a].append(b)
    
  elif altura[a] < altura[b]:
    adj[b].append(a)
    
busca(p)

print(cont - 1)