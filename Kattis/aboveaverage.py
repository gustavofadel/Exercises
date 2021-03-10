# coding: utf-8

for ct in range(int(input())):
  line = list(map(int, input().split()))
  n, grades = line[0], line[1:]
  above = average = 0
  
  for i in range(n):
    average += grades[i]
    
  average /= n
  
  for i in range(n):
    if grades[i] > average:
      above += 1
      
  print('%.3f%%' % (above / n * 100))