# coding: utf-8

from heapq import heappush, heappop

n = int(input())
squares = [int(input()) for i in range(n)]
distance = [[10 ** 9 + 10 for j in range(n + 1)] for i in range(n + 1)]
priorityQueue = list()

heappush(priorityQueue, (0, (1, 1)))
distance[0][0] = 0
distance[1][1] = squares[1]

while len(priorityQueue) > 0:
  top = heappop(priorityQueue)
  current, time = top[1]
  
  if current == n - 1:
    print(distance[current][time])
    break
  
  nextSquare = current - time
  
  if nextSquare >= 0:
    if distance[nextSquare][time] == 10 ** 9 + 10:
      distance[nextSquare][time] = distance[current][time] + squares[nextSquare]
      heappush(priorityQueue, (distance[nextSquare][time], (nextSquare, time)))
      
  nextSquare = current + time + 1
  
  if nextSquare < n:
    if distance[nextSquare][time + 1] == 10 ** 9 + 10:
      distance[nextSquare][time + 1] = distance[current][time] + squares[nextSquare]
      heappush(priorityQueue, (distance[nextSquare][time + 1], (nextSquare, time + 1)))