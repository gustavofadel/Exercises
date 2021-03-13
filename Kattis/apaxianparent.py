# coding: utf-8

y, p = input().split()
name = list(y)

if name[-1] == 'e':
  name.append('x')
  
elif name[-1] in 'aiou':
  name.pop(-1)
  name.append('ex')
  
elif name[-2:] != ['e', 'x']:
  name.append('ex')
  
name += list(p)

print(''.join(name))