# coding: utf-8

n, k, u = map(int, input().split())
cartelas = [list(map(int, input().split())) for i in range(n)]
sorteados = list(map(int, input().split()))
ganhou = [False] * n

for num in sorteados:
  for i in range(n):
    if num in cartelas[i]:
      cartelas[i][cartelas[i].index(num)] = -1
      
      if cartelas[i].count(-1) == k:
        ganhou[i] = True
        
  if True in ganhou:
    break
        
for i in range(n):
  if ganhou[i]:
    print(i + 1, end=' ')
    
print()