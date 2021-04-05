# coding: utf-8

from collections import defaultdict

for ct in range(int(input())):
  dictionary = defaultdict(int)
  disguises = 1
  n = int(input())
  
  for i in range(n):
    name, category = input().split()
    dictionary[category] += 1
    
  for key in dictionary:
    disguises *= dictionary[key] + 1
    
  print(disguises - 1)