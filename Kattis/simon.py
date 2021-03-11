# coding: utf-8

t = int(input())

for i in range(t):
  command = input().split()
  
  if ' '.join(command[:2]) == 'simon says':
    print(' '.join(command[2:]))
    
  else:
    print()