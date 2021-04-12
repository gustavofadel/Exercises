# coding: utf-8

n = int(input())
dates = dict()

for i in range(n):
  s, c, date = input().split()
  
  if date not in dates:
    dates[date] = (s, int(c))
    
  else:
    if int(c) > dates[date][1]:
      dates[date] = (s, int(c))
      
names = list()

for date in dates:
  names.append(dates[date][0])
  
print(len(names))
print(*sorted(names), sep = '\n')