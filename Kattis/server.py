# coding: utf-8

n, t = map(int, input().split())
tasks = list(map(int, input().split()))
completed = time = 0

for i in range(n):
  time += tasks[i]
  
  if time > t:
    break
  
  completed += 1
  
print(completed)