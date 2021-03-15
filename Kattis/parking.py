# coding: utf-8

price = [0] + list(map(int, input().split()))
arrival = [0 for i in range(3)]
departure = [0 for i in range(3)]

for i in range(3):
  arrival[i], departure[i] = map(int, input().split())
  
overallCost = 0
  
for i in range(max(departure) + 1):
  cars = 0
  
  for j in range(3):
    cars += (arrival[j] <= i < departure[j])
    
  overallCost += cars * price[cars]
  
print(overallCost)