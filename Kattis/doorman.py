# coding: utf-8

x = int(input())
queue = list(input())
men = women = 0

while len(queue) > 0:
  if abs(men - women) > x:
    break
  
  if men > women:
    if 'W' in queue:
      nextWoman = queue.index('W')
      
      if nextWoman < 2:
        queue.pop(nextWoman)
        women += 1
        
  if men < women:
    if 'M' in queue:
      nextMan = queue.index('M')
      
      if nextMan < 2:
        queue.pop(nextMan)
        men += 1
        
  if queue[0] == 'M':
    men += 1
    
  else:
    women += 1
    
  queue.pop(0)
  
inside = men + women

if abs(men - women) > x:
  inside -= 1
  
print(inside)