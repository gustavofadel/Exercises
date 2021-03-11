# coding: utf-8

from math import ceil

n = int(input())
correct = input()
adrianSequence = 'ABC' * ceil(n / 3)
brunoSequence = 'BABC' * ceil(n / 4)
goranSequence = 'CCAABB' * ceil(n / 6)
adrian = bruno = goran = 0

for i in range(n):
  if adrianSequence[i] == correct[i]:
    adrian += 1
    
  if brunoSequence[i] == correct[i]:
    bruno += 1
    
  if goranSequence[i] == correct[i]:
    goran += 1
    
m = max(adrian, bruno, goran)

print(m)

if adrian == m:
  print('Adrian')
  
if bruno == m:
  print('Bruno')
  
if goran == m:
  print('Goran')