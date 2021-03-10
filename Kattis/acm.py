# coding: utf-8

notSolved = dict()
solved = dict()

while True:
  log = input().split()
  
  if log[0] == '-1':
    break
  
  minutes, problem, result = int(log[0]), log[1], log[2]
  
  if result == 'right':
    total = minutes
    
    if problem in notSolved:
      total += 20 * notSolved[problem]
      
    solved[problem] = total
    
  else:
    if problem in notSolved:
      notSolved[problem] += 1
      
    else:
      notSolved[problem] = 1
  
count = time = 0

for problem in solved:
  count += 1
  time += solved[problem]
  
print(count, time)