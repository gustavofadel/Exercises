# coding: utf-8

from collections import defaultdict

n = int(input())
degrees = dict()
graph = defaultdict(list)
zeros = set()

for i in range(n):
  rule = input().split(':')
  child, parents = rule[0], rule[1].split()
  degrees[child] = len(parents)
  
  if degrees[child] == 0:
    zeros.add(child)
    
  for p in parents:
    graph[p].append(child)
    
changed = input()

if changed in zeros:
  zeros.remove(changed)
  
while len(zeros) > 0:
  current = zeros.pop()
  
  for child in graph[current]:
    degrees[child] -= 1
    
    if degrees[child] == 0 and child != changed:
      zeros.add(child)
      
zeros = [changed]

while len(zeros) > 0:
  current = zeros.pop()
  
  print(current)
  
  for child in graph[current]:
    degrees[child] -= 1
    
    if degrees[child] == 0:
      zeros.append(child)