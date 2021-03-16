# coding: utf-8

from itertools import permutations

x = int(input())
answer = -1

for permutation in permutations(sorted(str(x))):
  number = int(''.join(permutation))
  
  if number > x and (number < answer or answer == -1):
    answer = number
    
print(answer) if answer != -1 else print('0')