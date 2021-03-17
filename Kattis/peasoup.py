# coding: utf-8

n = int(input())
restaurant = ''

for i in range(n):
  k = int(input())
  name = input()
  peaSoup = pancakes = False
  
  for j in range(k):
    item = input()
    
    if item == 'pea soup':
      peaSoup = True
      
    elif item == 'pancakes':
      pancakes = True
      
  if peaSoup and pancakes and len(restaurant) == 0:
    restaurant = name
    
print(restaurant) if len(restaurant) > 0 else print('Anywhere is fine I guess')