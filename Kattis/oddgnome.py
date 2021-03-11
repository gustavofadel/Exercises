# coding: utf-8

for ct in range(int(input())):
  line = list(map(int, input().split()))
  g, gnomes = line[0], line[1:]
  
  for i in range(1, g):
    if gnomes[i] - gnomes[i - 1] != 1:
      king = i + 1
      break
    
  print(king)