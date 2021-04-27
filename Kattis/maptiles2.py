# coding: utf-8

s = input()
l = len(s)
x = y = 0

for i in range(l):
  if s[i] == '1' or s[i] == '3':
    x += 1 << (l - i - 1)
    
  if s[i] == '2' or s[i] == '3':
    y += 1 << (l - i - 1)
    
print(l, x, y)