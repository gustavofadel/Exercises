# coding: utf-8

from collections import deque
from sys import stdin, stdout

n = int(stdin.readline().strip())
left = deque()
right = deque()

for i in range(n):
  s, x = stdin.readline().strip().split()
  x = int(x)
  
  if s == 'push_back':
    right.append(x)
    
  elif s == 'push_front':
    left.appendleft(x)
    
  elif s == 'push_middle':
    left.append(x)
    
  else:
    stdout.write(str(left[x]) + '\n') if x < len(left) else stdout.write(str(right[x - len(left)]) + '\n')
    
  if len(left) < len(right):
    left.append(right.popleft())
    
  elif len(left) > len(right) + 1:
    right.appendleft(left.pop())