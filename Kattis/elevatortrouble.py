# coding: utf-8

f, s, g, u, d = map(int, input().split())

s -= 1
g -= 1

pushes = [1000000001 for i in range(f)]
queue = [s]

pushes[s] = 0

while len(queue) > 0:
  current = queue.pop(0)
  
  if current + u < f and pushes[current] + 1 < pushes[current + u]:
    pushes[current + u] = pushes[current] + 1
    queue.append(current + u)
    
  if current - d >= 0 and pushes[current] + 1 < pushes[current - d]:
    pushes[current - d] = pushes[current] + 1
    queue.append(current - d)
    
print(pushes[g]) if pushes[g] != 1000000001 else print('use the stairs')