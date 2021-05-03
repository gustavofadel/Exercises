# coding: utf-8

for case in range(1, int(input()) + 1):
  r, p, d = map(int, input().split())
  ingredients = list()
  scalingFactor = d / p
  
  for i in range(r):
    name, weight, percentage = input().split()
    weight, percentage = map(float, [weight, percentage])
    
    if percentage == 100:
      scaledMainWeight = weight * scalingFactor
    
    ingredients.append([name, weight, percentage])
  
  print('Recipe #', case)
  
  for name, weight, percentage in ingredients:
    print(name, '%.1f' % (scaledMainWeight * percentage / 100))
    
  print('-' * 40)