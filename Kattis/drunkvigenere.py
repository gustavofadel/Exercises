# coding: utf-8

c = input()
k = input()
d = ''

for i in range(len(c)):
  if i % 2 == 0:
    d += chr(((ord(c[i]) - ord('A')) - (ord(k[i]) - ord('A'))) % 26 + ord('A'))
    
  else:
    d += chr(((ord(c[i]) - ord('A')) + (ord(k[i]) - ord('A'))) % 26 + ord('A'))

print(d)