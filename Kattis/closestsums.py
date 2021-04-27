# coding: utf-8

case = 1

while True:
  try:
    n = int(input())
    a = [int(input()) for i in range(n)]
    m = int(input())
    
    print('Case', '%d:' % case)
    
    for i in range(m):
      q = int(input())
      closest = a[0] + a[1]
      
      for j in range(n):
        for k in range(j + 1, n):
          if abs(a[j] + a[k] - q) < abs(closest - q):
            closest = a[j] + a[k]
            
      print('Closest sum to', q, 'is', '%d.' % closest)
      
    case += 1
    
  except EOFError:
    break