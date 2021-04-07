# coding: utf-8

route = input()
minimum = len(route)

for i in range(len(route)):
  for j in range(i + 1, len(route)):
    minimum = min(minimum, len(route.replace(route[i : j], 'M')) + len(route[i : j]))
    
print(minimum)