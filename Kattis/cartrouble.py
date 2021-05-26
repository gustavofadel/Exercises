# coding: utf-8

def dfs (vertex, graph):
  if not visited[vertex]:
    visited[vertex] = True
    
    for neighbor in graph[vertex]:
      dfs(neighbor, graph)

n = int(input())
order = list()
inverse = [list() for i in range(1000)]
normal = [list() for i in range(1000)]
withProblem = False

for i in range(n):
  data = list(map(int, input().split()))
  street, number, connections = data[0], data[1], data[2:]
  order.append(street)
  
  for connection in connections:
    normal[street].append(connection)
    inverse[connection].append(street)
  
visited = [False for i in range(1000)]
dfs(0, inverse)
  
for i in range(n):
  if not visited[order[i]]:
    print('TRAPPED', order[i])
    withProblem = True
      
visited = [False for i in range(1000)]
dfs(0, normal)
  
for i in range(n):
  if not visited[order[i]]:
    print('UNREACHABLE', order[i])
    withProblem = True
      
if not withProblem:
  print('NO PROBLEMS')