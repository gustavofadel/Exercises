# coding: utf-8

from collections import deque

keystrokes = input()
left = deque()
right = deque()

for key in keystrokes:
  if key == 'L':
    right.appendleft(left.pop())
    
  elif key == 'R':
    left.append(right.popleft())
    
  elif key == 'B':
    left.pop()
  
  else:
    left.append(key)
    
print(''.join(left) + ''.join(right))