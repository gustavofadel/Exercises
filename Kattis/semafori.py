# coding: utf-8

n, l = map(int, input().split())
trafficLights = [[0, 0] for i in range(l)]

for i in range(n):
  d, r, g = map(int, input().split())
  trafficLights[d] = [r, g]
  
time = 0

for i in range(l):
  if trafficLights[i] == [0, 0]:
    time += 1
    
  else:
    r, g = trafficLights[i]
    
    if time % (r + g) < r:
      time += r - (time % (r + g))
      
    time += 1
    
print(time)