# coding: utf-8

for ct in range(int(input())):
  n = int(input()) + 2
  x = [0 for i in range(n)]
  y = [0 for i in range(n)]
  visited = [False for i in range(n)]
  
  for i in range(n):
    x[i], y[i] = map(int, input().split())
    
  queue = [0]
  
  while len(queue) > 0:
    front = queue.pop(0)
    
    if not visited[front]:
      visited[front] = True
      
      for i in range(n):
        if i != front:
          if abs(x[front] - x[i]) + abs(y[front] - y[i]) <= 1000:
            queue.append(i)
            
  print('happy') if visited[-1] else print('sad')