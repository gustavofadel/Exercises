# coding: utf-8

n, m = map(int, input().split())
i, r = map(int, input().split())
infectados = [False] * (n + 1)

for j in range(1, m + 1):
  if j == r:
    infectados[i] = True
  
  infectado = False
  reuniao = list(map(int, input().split()))
  
  for a in reuniao[1:]:
    if infectados[a]:
      infectado = True
      break
    
  if infectado:
    for a in reuniao[1:]:
      infectados[a] = True
      
print(infectados.count(True))