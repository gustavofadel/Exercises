# coding: utf-8

while True:
  n = int(input())
  
  if n == -1:
    break
  
  graph = [list(map(int, input().split())) for i in range(n)]
  
  for i in range(n):
    weak = True
    
    for j in range(n):
      for k in range(n):
        if graph[i][j] == graph[i][k] == graph[j][k] == 1 and i != j and i != k and j != k:
          weak = False
          
    if weak:
      print(i, end = ' ')
      
  print()