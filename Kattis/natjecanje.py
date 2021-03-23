# coding: utf-8

n, s, r = map(int, input().split())
damaged = list(map(int, input().split()))
reserve = list(map(int, input().split()))
teams = [1 for i in range(n)]

for team in damaged:
  teams[team - 1] -= 1
  
for team in reserve:
  teams[team - 1] += 1
  
for i in range(n):
  if i == 0:
    if teams[i] == 0 and teams[i + 1] == 2:
      teams[i] += 1
      teams[i + 1] -= 1
      
  elif i == n - 1:
    if teams[i] == 0 and teams[i - 1] == 2:
      teams[i] += 1
      teams[i - 1] -= 1
      
  else:
    if teams[i] == 0:
      if teams[i - 1] == 2:
        teams[i] += 1
        teams[i - 1] -= 1
        
      elif teams[i + 1] == 2:
        teams[i] += 1
        teams[i + 1] -= 1
        
print(teams.count(0))