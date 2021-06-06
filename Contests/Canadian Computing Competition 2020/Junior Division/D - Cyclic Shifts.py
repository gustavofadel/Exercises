# coding: utf-8

t, s = [input() for i in range(2)]

for i in range(len(s)):
  if s in t:
    print('yes')
    exit()
    
  s = s[-1] + s[:-1]
  
print('no')