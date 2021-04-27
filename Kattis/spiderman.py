# coding: utf-8

for ct in range(int(input())):
  n = int(input())
  distances = list(map(int, input().split()))
  total = sum(distances)
  largest = max(distances) + total + 1
  directions = [[0 for j in range(largest)] for i in range(n + 1)]
  positions = [[total for j in range(largest)] for i in range(n + 1)]
  positions[0][0] = 0
  
  for i in range(n):
    for j in range(total + 1):
      if positions[i + 1][j + distances[i]] > max(j + distances[i], positions[i][j]):
        positions[i + 1][j + distances[i]] = max(j + distances[i], positions[i][j])
        directions[i + 1][j + distances[i]] = 1
        
      if j - distances[i] >= 0 and positions[i + 1][j - distances[i]] > positions[i][j]:
        positions[i + 1][j - distances[i]] = positions[i][j]
        directions[i + 1][j - distances[i]] = -1
        
  path = ''
  
  if positions[-1][0] != total:
    distance = 0
    
    for i in range(n, 0, -1):
      if directions[i][distance] == 1:
        distance -= distances[i - 1]
        path += 'U'
        
      else:
        distance += distances[i - 1]
        path += 'D'
        
    print(path[::-1])
    
  else:
    print('IMPOSSIBLE')