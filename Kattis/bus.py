# coding: utf-8

for ct in range(int(input())):
  k = int(input())
  people = 0
  
  for i in range(k):
    people = 2 * (people + 0.5)
    
  print(int(people))