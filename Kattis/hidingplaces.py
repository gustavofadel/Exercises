# coding: utf-8

from collections import deque

direction = [(-2, 1), (-1, 2), (-2, -1), (-1, -2), (1, -2), (1, 2), (2, -1), (2, 1)]

def inRange (i, j):
  return (0 <= i < 8 and 0 <= j < 8)

for case in range(int(input())):
  knight = input()
  position = (ord(knight[0]) - ord('a'), int(knight[1]) - 1)
  distance = [[float('inf') for j in range(8)] for i in range(8)]
  distance[position[0]][position[1]] = 0
  queue = deque([position])
  
  while queue:
    x, y = queue.popleft()
    
    for a, b in direction:
      nx, ny = x + a, y + b
      
      if inRange(nx, ny) and distance[nx][ny] > distance[x][y] + 1:
        distance[nx][ny] = distance[x][y] + 1
        queue.append((nx, ny))
  
  maxDistance = max(max(distance[i]) for i in range(8))
  
  print(maxDistance, end = ' ')
  
  for j in range(7, -1, -1):
    for i in range(8):
      if distance[i][j] == maxDistance:
        print('%s%d' % (chr(ord('a') + i), j + 1), end = ' ')
        
  print()