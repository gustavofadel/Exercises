# coding: utf-8

n = int(input())
team = [input() for i in range(n)]
increasing = decreasing = True
increasingTeam = sorted(team.copy())
decreasingTeam = sorted(team.copy(), reverse = True)

for i in range(n):
  if team[i] != increasingTeam[i]:
    increasing = False
    break
  
for i in range(n):
  if team[i] != decreasingTeam[i]:
    decreasing = False
    break
  
if not increasing and not decreasing:
  print('NEITHER')
  
elif increasing:
  print('INCREASING')
  
else:
  print('DECREASING')