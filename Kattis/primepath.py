# coding: utf-8

from math import sqrt

def isPrime (x):
  if x < 2:
    return False
    
  if x == 2:
    return True
    
  for i in range(2, int(sqrt(x)) + 1):
    if x % i == 0:
      return False
  
  return True
  
def connect (i, j):
  differences = 0
  
  while i > 0 and j > 0:
    if i % 10 != j % 10:
      differences += 1
      
    i //= 10
    j //= 10
    
  return differences == 1
  
primes = [x for x in range(1000, 10000) if isPrime(x)]
adjacency = dict()

for i in primes:
  adjacency[i] = set()
  
  for j in primes:
    if connect(i, j):
      adjacency[i].add(j)
      
for case in range(int(input())):
  a, b = map(int, input().split())
  queue = [a]
  visited = dict()
  visited[a] = 0
  
  while len(queue) > 0:
    current = queue.pop(0)
    
    for neighbor in adjacency[current]:
      if neighbor not in visited:
        queue.append(neighbor)
        visited[neighbor] = visited[current] + 1
        
  print(visited.get(b, 0))