# coding: utf-8

infinity = float('inf')
possibilities = list(map(int, input().split()[1:]))
total = sum(possibilities)
possibilities.extend([-x for x in list(map(int, input().split()[1:]))])
packs = [float('inf') for i in range(total + 1)]
packs[0] = 0

for p in possibilities:
  updated = packs.copy()
  
  for i in range(total + 1):
    if packs[i] != infinity:
      if i + p >= 0:
        if updated[i + p] > packs[i] + 1 or updated[i + p] == 0:
          updated[i + p] = packs[i] + 1
          
  packs = updated

print(packs[0]) if packs[0] != 0 else print('impossible')