# coding: utf-8

n, p, m = map(int, input().split())
points = {input(): 0 for i in range(n)}
winners = list()

for i in range(m):
  name, scored = input().split()
  
  if name not in winners:
    points[name] += int(scored)
    
    if points[name] >= p:
      winners.append(name)
      
print('\n'.join('%s wins!' % name for name in winners)) if len(winners) > 0 else print('No winner!')