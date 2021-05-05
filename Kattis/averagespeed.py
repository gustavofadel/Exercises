# coding: utf-8

previous = [0, 0, 0]
distance = speed = 0

while True:
  try:
    query = input().split()
    
    if len(query) == 1:
      current = list(map(int, query[0].split(':')))
      
    else:
      current, newSpeed = list(map(int, query[0].split(':'))), int(query[1])
      
    distance += (current[0] - previous[0]) * speed
    distance += ((current[1] - previous[1]) * speed) / 60
    distance += ((current[2] - previous[2]) * speed) / 3600
    previous = current
    
    if len(query) == 1: 
      print(current, '%.2f km' % distance)
      
    else:
      speed = newSpeed
    
  except EOFError:
    break