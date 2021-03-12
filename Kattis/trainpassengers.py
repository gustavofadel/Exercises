# coding: utf-8

c, n = map(int, input().split())
consistent = True
inside = 0

for i in range(n):
  left, entered, stayed = map(int, input().split())
  
  inside -= left
  
  if inside < 0:
    consistent = False
  
  inside += entered
  
  if inside > c:
    consistent = False
    
  if stayed > 0 and inside < c:
    consistent = False
    
if inside > 0:
  consistent = False
    
print('possible') if consistent else print('impossible')