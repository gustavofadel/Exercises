# coding: utf-8

representations = list()
representations.append('xxxxx\nx...x\nx...x\nx...x\nx...x\nx...x\nxxxxx')
representations.append('....x\n....x\n....x\n....x\n....x\n....x\n....x')
representations.append('xxxxx\n....x\n....x\nxxxxx\nx....\nx....\nxxxxx')
representations.append('xxxxx\n....x\n....x\nxxxxx\n....x\n....x\nxxxxx')
representations.append('x...x\nx...x\nx...x\nxxxxx\n....x\n....x\n....x')
representations.append('xxxxx\nx....\nx....\nxxxxx\n....x\n....x\nxxxxx')
representations.append('xxxxx\nx....\nx....\nxxxxx\nx...x\nx...x\nxxxxx')
representations.append('xxxxx\n....x\n....x\n....x\n....x\n....x\n....x')
representations.append('xxxxx\nx...x\nx...x\nxxxxx\nx...x\nx...x\nxxxxx')
representations.append('xxxxx\nx...x\nx...x\nxxxxx\n....x\n....x\nxxxxx')
representations.append('.....\n..x..\n..x..\nxxxxx\n..x..\n..x..\n.....')

lines = [input() for i in range(7)]
current = 0
numbers = [0, 0]

for k in range(0, len(lines[0]), 6):
  number = ''
  
  for i in range(7):
    if i > 0:
      number += '\n'
      
    for j in range(k, k + 5):
      number += lines[i][j]
  
  if representations.index(number) != 10:
    numbers[current] = numbers[current] * 10 + int(representations.index(number))
    
  else:
    current += 1
    
digits = [representations[int(i)] for i in str(sum(numbers))]

for i in range(7):
  for k in range(len(digits)):
    if k > 0:
      print('.', end = '')
    
    for j in range(6 * i, 6 * i + 5):
      print(digits[k][j], end = '')
      
  print()