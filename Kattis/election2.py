# coding: utf-8

n = int(input())
parties = dict()
votes = dict()

for i in range(n):
  candidate = input()
  party = input()
  parties[candidate] = party
  votes[candidate] = 0
  
m = int(input())

for i in range(m):
  vote = input()
  votes[vote] = votes.get(vote, 0) + 1
  
winner = [parties.get(candidate, '') for candidate, total in votes.items() if total == max(votes.values())]

print(winner[0] if len(winner) == 1 else 'tie')