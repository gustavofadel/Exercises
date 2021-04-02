# coding: utf-8

from collections import deque

for ct in range(int(input())):
  p = input()
  n = int(input())
  
  if n == 0:
    a = deque(input().replace('[]', ''))
  
  else:
    a = deque(map(int, input()[1 : -1].split(',')))
  
  error = reverse = False
  
  for c in p:
    if c == 'R':
      reverse = not reverse
      
    else:
      if len(a) == 0:
        error = True
        break
      
      else:
        if reverse:
          a.pop()
          
        else:
          a.popleft()
  
  if reverse:
    a = reversed(a)
  
  print('error') if error else print('[%s]' % ','.join([str(x) for x in a]))