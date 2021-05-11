# coding: utf-8

from collections import deque

demands = {
  'b': '$',
  'j': '*',
  't': '|'
}
n = int(input())

for i in range(n):
  a = input()
  bag = deque()
  possible = True
  
  for c in a:
    if c == '$' or c == '*' or c == '|':
      bag.append(c)
      
    elif c != '.':
      if bag and bag[-1] == demands[c]:
        bag.pop()
        
      else:
        possible = False
        break
      
  print('YES' if possible and not bag else 'NO')