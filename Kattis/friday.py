# coding: utf-8

for ct in range(int(input())):
  totalDays, months = map(int, input().split())
  year = list()
  
  for days in list(map(int, input().split())):
    for day in range(1, days + 1):
      year.append(day)
      
  count = 0
  
  for i in range(totalDays):
    if year[i] == 13 and i % 7 == 5:
      count += 1
      
  print(count)