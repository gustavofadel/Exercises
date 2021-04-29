# coding: utf-8

n = int(input())
pushes = list(map(int, input().split()))
cleans = last = 0
current = list()

for i in range(n):
  temporary = 0
  
  for j in range(len(current)):
    temporary += pushes[i] - last - current[j]
    
  if temporary < 20:
    current.append(pushes[i] - last)
    
  else:
    cleans += 1
    last = pushes[i]
    current = [pushes[i] - last]
    
print(cleans + 1)