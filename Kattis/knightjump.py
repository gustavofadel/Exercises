# coding: utf-8

directions = [(2, 1), (2, -1), (-2, 1), (-2, -1), (1, 2), (1, -2), (-1, 2), (-1, -2)]
infinity = float('inf')
n = int(input())
board = [input() for i in range(n)]

for i in range(n):
  if 'K' in board[i]:
    position = (i, board[i].find('K'))
    break

steps = -1
queue = [(position, 0)]  
visited = {position}

while len(queue) > 0:
  current, cost = queue.pop(0)
  
  if current == (0, 0):
    steps = cost
    break
  
  for a, b in directions:
    x, y = current[0] + a, current[1] + b
    
    if 0 <= x < n and 0 <= y < n and board[x][y] != '#' and (x, y) not in visited:
      queue.append(((x, y), cost + 1))
      visited.add((x, y))
      
print(steps)