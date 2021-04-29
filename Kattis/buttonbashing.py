# coding: utf-8

infinity = 10 ** 9 + 10

for ct in range(int(input())):
  n, t = map(int, input().split())
  b = list(map(int, input().split()))
  distance = [infinity for i in range(3601)]
  distance[0] = 0
  queue = [0]
  
  while len(queue) > 0:
    currentTime = queue.pop(0)
    
    for time in b:
      nextTime = max(0, min(3600, currentTime + time))
      
      if distance[nextTime] > distance[currentTime] + 1:
        distance[nextTime] = distance[currentTime] + 1
        queue.append(nextTime)
        
  for i in range(t, 3601):
    if distance[i] != infinity:
      print(distance[i], i - t)
      break