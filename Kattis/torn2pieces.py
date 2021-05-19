# coding: utf-8

from collections import defaultdict

n = int(input())
connections = defaultdict(set)

for i in range(n):
  station = input().split()
  name = station[0]
  
  for connected in station[1:]:
    connections[name].add(connected)
    connections[connected].add(name)

starting, destination = input().split()
queue = [(connection, [starting, connection]) for connection in connections[starting]]
visited = set([starting])

while queue and queue[0][0] != destination:
  station, route = queue.pop(0)
  
  if station not in visited:
    visited.add(station)
    
    for connection in connections[station] - visited:
      queue.append((connection, route + [connection]))
      
print(' '.join(queue[0][1]) if queue else 'no route found')