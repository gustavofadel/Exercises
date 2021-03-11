# coding: utf-8

n = int(input())
universities = list()
winners = list()

for i in range(n):
  university, team = input().split()
  
  if university not in universities and len(winners) < 12:
    universities.append(university)
    winners.append((university, team))
    
for i in range(len(winners)):
  print(*winners[i], sep = ' ')