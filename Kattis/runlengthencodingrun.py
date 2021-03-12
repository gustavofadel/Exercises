# coding: utf-8

operation, message = input().split()

if operation == 'D':
  for i in range(0, len(message) - 1, 2):
    print(message[i] * int(message[i + 1]), end = '')
    
  print()
  
else:
  encoded = ''
  count = 1
  
  for i in range(1, len(message)):
    if message[i] != message[i - 1]:
      encoded += message[i - 1] + str(count)
      count = 1
      
    else:
      count += 1
      
  encoded += message[-1] + str(count)
  
  print(encoded)