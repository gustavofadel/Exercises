# coding: utf-8

k, n = map(int, input().split())
n -= 1
karlYear, karlStrength = map(int, input().split())
count = 0
years = [0 for i in range(2011 + n - karlYear)]

for i in range(n + k - 1):
  year, strength = map(int, input().split())
  
  if year <= karlYear:
    if strength < karlStrength:
      count += 1
    
  else:
    years[year - karlYear - 1] = strength

i = -1

while count < k - 1:
  i += 1
  
  if i >= 2011 + n - karlYear:
    break
  
  if years[i] < karlStrength:
    count += 1
    
if count < k - 1:
  print('unknown')
  
else:
  print(karlYear) if karlYear > 2012 + i else print(karlYear + i + 1) 