# coding: utf-8

b, l = map(int, input().split())
d = [0] + list(map(int, input().split()))
p = [0, 0]

for i, v in enumerate(d[1:]):
  p[(i + 1) & 1] += v
  
if p[0] % (b + 1) == p[1] % (b + 1):
  print(0, 0)
  exit()
  
for i in range(1, l + 1):
  sub = (p[i & 1] - p[(i & 1) ^ 1] + (b + 1)) % (b + 1)
  
  if d[i] >= sub:
    print(i, d[i] - sub)
    exit()
    
print(-1, -1)