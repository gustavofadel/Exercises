# coding: utf-8

n, m, c = map(int, input().split())
amigos = dict()
adoram = dict()
detestam = [list() for i in range(m+1)]

for i in range(n):
  a, d = map(int, input().split())
  adoram[i] = a
  detestam[d].append(i)
  
res = 0

while True:
  if res > n + m:
    print(-1)
    break
    
  if len(detestam[c]) > 0:
    c = adoram[detestam[c][0]]
    res += 1
      
  else:
    print(res)
    break