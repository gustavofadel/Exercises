# coding: utf-8

from collections import defaultdict

case = 1

while True:
  n = int(input())
  
  if n == 0:
    break
  
  count = defaultdict(int)
  
  for i in range(n):
    animal = input().split()
    count[animal[-1].lower()] += 1
    
  print('List %d:' % case)
    
  for animal in sorted(count):
    print(animal, '|', count[animal])
    
  case += 1