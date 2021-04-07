# coding: utf-8

while True:
  try:
    line = list(map(int, input().split()))
    n, a = line[0], line[1:]
    differences = list()
    jolly = True
    
    for i in range(1, n):
      difference = abs(a[i] - a[i - 1])
      
      if not (1 <= difference < n) or difference in differences:
        jolly = False
        break
      
      else:
        differences.append(difference)
        
    print('Jolly') if jolly else print('Not jolly')
    
  except EOFError:
    break