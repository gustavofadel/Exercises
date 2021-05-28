# coding: utf-8

for case in range(int(input())):
  adjustment = input().split()
  operation, [change, hours, minutes] = adjustment[0], map(int, adjustment[1:])
  minutes = (minutes + 60 * hours + (-1 if operation == 'B' else 1) * change + 1440) % 1440
  
  print(minutes // 60, minutes % 60)