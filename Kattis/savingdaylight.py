# coding: utf-8

while True:
  try:
    month, day, year, rises, sets = input().split()
    hourRises, minuteRises = map(int, rises.split(':'))
    hourSets, minuteSets = map(int, sets.split(':'))
    hours = hourSets - hourRises - int(minuteRises > minuteSets)
    minutes = (minuteSets - minuteRises + 60) % 60
    
    print(month, day, year, hours, 'hours', minutes, 'minutes')
    
  except EOFError:
    break