# coding: utf-8

candidates = dict()

while True:
  name = input()
  
  if name == '***':
    break
  
  candidates[name] = candidates.get(name, 0) + 1
  
maximumVotes = 0
winner = list()

for name, votes in candidates.items():
  if votes > maximumVotes:
    maximumVotes = votes
    winner = [name]
    
  elif votes == maximumVotes:
    winner.append(name)
    
print(winner[0]) if len(winner) == 1 else print('Runoff!')