# coding: utf-8

n = int(input())

for i in range(n):
  problem = input()
  
  if problem == 'P=NP':
    print('skipped')
    
  else:
    print(eval(problem))