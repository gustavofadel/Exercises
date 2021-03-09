# coding: utf-8

for ct in range(int(input())):
  n = int(input())
  cities = set()
  
  for i in range(n):
    city = input()
    cities.add(city)
    
  print(len(cities))