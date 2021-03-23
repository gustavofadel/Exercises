# coding: utf-8

n, k = map(int, input().split())
attack = [0 for i in range(n)]
defense = [0 for i in range(n)]
health = [0 for i in range(n)]

for i in range(n):
  attack[i], defense[i], health[i] = map(int, input().split())
  
attack = [index for index, value in sorted(enumerate(attack), key = lambda x: x[1], reverse = True)]
defense = [index for index, value in sorted(enumerate(defense), key = lambda x: x[1], reverse = True)]
health = [index for index, value in sorted(enumerate(health), key = lambda x: x[1], reverse = True)]
team = set()

for i in range(k):
  team.add(attack[i])
  team.add(defense[i])
  team.add(health[i])
  
print(len(team))