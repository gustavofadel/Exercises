# coding: utf-8

from collections import defaultdict

s = input()
cards = defaultdict(list)
error = False

for i in range(0, len(s), 3):
  suit, number = s[i], int(s[i + 1] + s[i + 2])
  
  if number in cards[suit]:
    error = True
    break
  
  else:
    cards[suit].append(number)
    
print(13 - len(cards['P']), 13 - len(cards['K']), 13 - len(cards['H']), 13 - len(cards['T'])) if not error else print('GRESKA')