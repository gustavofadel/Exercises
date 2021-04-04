# coding: utf-8

n = int(input())
a = list(map(int, input().split()))
b = list()
moves = 0

while len(a) > 0:
  moves += 1
  
  if len(b) == 0:
    b.append(a.pop())
  
  elif a[-1] == b[-1]:
    a.pop()
    b.pop()
    
  else:
    b.append(a.pop())
    
print(moves) if len(b) == 0 else print('impossible')