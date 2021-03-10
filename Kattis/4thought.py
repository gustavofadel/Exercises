# coding: utf-8

operators = [' // ', ' * ', ' - ', ' + ']
possibilites = dict()

for i in range(4):
  for j in range(4):
    for k in range(4):
      expression = '4' + operators[i] + '4' + operators[j] + '4' + operators[k] + '4'
      value = eval(expression)
      possibilites[value] = expression
      
m = int(input())

for i in range(m):
  n = int(input())
  
  if n in possibilites:
    print(possibilites[n].replace('//', '/'), '=', n)
    
  else:
    print('no solution')