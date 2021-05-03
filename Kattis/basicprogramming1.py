# coding: utf-8

n, t = map(int, input().split())
a = list(map(int, input().split()))

if t == 1:
  print(7)
  
elif t == 2:
  print('Bigger' if a[0] > a[1] else 'Equal' if a[0] == a[1] else 'Smaller')
  
elif t == 3:
  print(sorted(a[:3])[1])
  
elif t == 4:
  print(sum(a))
  
elif t == 5:
  print(sum(x for x in a if x & 1 == 0))
  
elif t == 6:
  a = [x % 26 for x in a]
  print(''.join(chr(ord('a') + x) for x in a))
  
else:
  i = 0
  visited = [0 for i in range(n)]
  
  while True:
    i = a[i]
    
    if i >= n:
      print('Out')
      break
      
    elif i == n - 1:
      print('Done')
      break
    
    elif visited[i]:
      print('Cyclic')
      break
    
    visited[i] = True