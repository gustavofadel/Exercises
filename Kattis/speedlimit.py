# coding: utf-8

while True:
  n = int(input())
  
  if n == -1:
    break
  
  data = [list(map(int, input().split())) for i in range(n)]
  distance = data[0][0] * data[0][1]
  
  for i in range(1, n):
    distance += data[i][0] * (data[i][1] - data[i - 1][1])
    
  print(distance, 'miles')