# coding: utf-8

n = input()
m = input()

if len(n) < len(m):
  n = '0' * (len(m) - len(n)) + n
  
elif len(n) > len(m):
  m = '0' * (len(n) - len(m)) + m

x = ''
y = ''

for i in range(len(n)):
  if n[i] > m[i]:
    x += n[i]
    
  elif n[i] < m[i]:
    y += m[i]
    
  else:
    x += n[i]
    y += m[i]
    
print(int(x)) if len(x) > 0 else print('YODA')
print(int(y)) if len(y) > 0 else print('YODA')