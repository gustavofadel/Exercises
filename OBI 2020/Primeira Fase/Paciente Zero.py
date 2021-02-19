# coding: utf-8

n, c = map(int, input().split())
z = [True] * (n + 1)

for i in range(c):
  inp = list(map(int, input().split()))
  
  for x in inp[2:]:
    z[x] = False
    
zeros = [i for i in range(1, n + 1) if z[i]]
print(*zeros, sep='\n')