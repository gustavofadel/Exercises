# coding: utf-8

n = int(input())
pink = 0

for i in range(n):
  color = input().lower()
  pink += int('pink' in color or 'rose' in color)
  
print(pink) if pink > 0 else print('I must watch Star Wars with my daughter')