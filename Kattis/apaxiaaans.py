# coding: utf-8

name = input()
last = ''

for i in range(len(name)):
  if name[i] != last:
    print(name[i], end = '')
    last = name[i]
    
print()