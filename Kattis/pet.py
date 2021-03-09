# coding: utf-8

winner = [-1, -1]

for i in range(1, 6):
  grades = list(map(int, input().split()))
  
  if sum(grades) > winner[1]:
    winner = [i, sum(grades)]
    
print(*winner, sep = ' ')