# coding: utf-8

def function (x, y):
  if x > y:
    return 2 * function(x - y, y) + 1
  
  elif x == y:
    return 1
    
  else:
    return 2 * function(x, y - x)
    
for ct in range(int(input())):
  k, fraction = input().split()
  k = int(k)
  p, q = map(int, fraction.split('/'))
  
  print(k, function(p, q))