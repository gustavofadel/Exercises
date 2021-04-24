# coding: utf-8

from collections import defaultdict

def dfs (city):
  global safe
  
  state[city] = 1
  
  for adjacent in graph[city]:
    current = state.get(adjacent, 0)
    
    if current == 0:
      dfs(adjacent)
      
    elif current == 1:
      safe = True
      break
      
  state[city] = 2
  
graph = defaultdict(set)
n = int(input())
state = dict()

for i in range(n):
  o, d = input().split()
  graph[o].add(d)
  
while True:
  try:
    city = input()
    
    safe = False
    state.clear()
    dfs(city)
    
    print(city, 'safe' if safe else 'trapped')
    
  except EOFError:
    break