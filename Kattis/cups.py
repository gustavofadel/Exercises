# coding: utf-8

n = int(input())
cups = dict()

for i in range(n):
  tokens = input().split()
  
  if tokens[0].isdigit():
    diameter, color = int(tokens[0]), tokens[1]
    cups[diameter // 2] = color
    
  else:
    color, radius = tokens[0], int(tokens[1])
    cups[radius] = color
    
keys = sorted(cups.keys())

for key in keys:
  print(cups[key])