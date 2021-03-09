# coding: utf-8

n = int(input())

for i in range(n):
  a, b, c = map(int, input().split())
  possible = False
  
  if a + b == c:
    possible = True
    
  elif a - b == c:
    possible = True
    
  elif a * b == c:
    possible = True
    
  elif a / b == c:
    possible = True
    
  elif b - a == c:
    possible = True
    
  elif b / a == c:
    possible = True
    
  print('Possible') if possible else print('Impossible')