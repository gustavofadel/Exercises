# coding: utf-8

count = [0 for i in range(14)]
cards = input().split()

for card in cards:
  rank = card[0]
  
  if rank == 'A':
    count[1] += 1
    
  elif rank == 'T':
    count[10] += 1
    
  elif rank == 'J':
    count[11] += 1
    
  elif rank == 'Q':
    count[12] += 1
    
  elif rank == 'K':
    count[13] += 1
    
  else:
    count[int(rank)] += 1
    
print(max(count))