# coding: utf-8

n = int(input())
a = list()
b = list()

for i in range(n):
  name, first, others = input().split()
  first, others = float(first), float(others)
  a.append((first, name))
  b.append((others, name))
  
a = sorted(a)[:4]
b = sorted(b)[:4]

attempts = list()

for firstTime, firstName in a:
  runners = [firstName]
  totalTime = firstTime
  
  for i in range(4):
    time, name = b[i]
    
    if name != firstName:
      runners.append(name)
      totalTime += time
      
    if len(runners) == 4:
      break
  
  attempts.append((totalTime, runners))
  
best = sorted(attempts)[0]

print(best[0])
print(*best[1], sep = '\n')