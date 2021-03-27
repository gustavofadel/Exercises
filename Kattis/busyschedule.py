# coding: utf-8

while True:
  n = int(input())
  
  if n == 0:
    break
  
  dictionary = dict()
  indices = list()
  
  for i in range(n):
    time, period = input().split()
    hours, minutes = map(int, time.split(':'))
    
    if hours == 12:
      hours = 0
      
    if period == 'p.m.':
      hours += 12
      
    index = 60 * hours + minutes
    indices.append(index)
    dictionary[index] = ' '.join([time, period])
    
  indices.sort()
  
  for index in indices:
    print(dictionary[index])
    
  print()