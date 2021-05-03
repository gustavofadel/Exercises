# coding: utf-8

while True:
  w, l = map(int, input().split())
  
  if w == l == 0:
    break
  
  n = int(input())
  actual = [0, 0]
  robot = [0, 0]
  
  for i in range(n):
    x, y = input().split()
    
    if x == 'u':
      actual[1] = max(0, min(actual[1] + int(y), l - 1))
      robot[1] += int(y)
      
    elif x == 'd':
      actual[1] = max(0, min(actual[1] - int(y), l - 1))
      robot[1] -= int(y)
      
    elif x == 'l':
      actual[0] = max(0, min(actual[0] - int(y), w - 1))
      robot[0] -= int(y)
      
    else:
      actual[0] = max(0, min(actual[0] + int(y), w - 1))
      robot[0] += int(y)
      
  print('Robot thinks', ' '.join(map(str, robot)))
  print('Actually at', ' '.join(map(str, actual)), end = '\n\n')