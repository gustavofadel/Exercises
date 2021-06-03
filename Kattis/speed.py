# coding: utf-8

n, t = map(int, input().split())
d = [0 for i in range(n)]
s = [0 for i in range(n)]
maximum = 1e9
minimum = -1e9

for i in range(n):
  d[i], s[i] = map(int, input().split())
  minimum = max(minimum, -s[i])
  
while maximum - minimum > 1e-9:
  c = (maximum + minimum) / 2
  
  if sum(d[i] / (s[i] + c) for i in range(n)) > t:
    minimum = c
    
  else:
    maximum = c
    
print('%.9f' % c)