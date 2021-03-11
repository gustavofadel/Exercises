# coding: utf-8

for ct in range(int(input())):
  turtles = list(map(int, input().split()))[:-1]
  notBorn = 0
  
  for i in range(1, len(turtles)):
    if turtles[i] > 2 * turtles[i - 1]:
      notBorn += turtles[i] - 2 * turtles[i - 1]
      
  print(notBorn)