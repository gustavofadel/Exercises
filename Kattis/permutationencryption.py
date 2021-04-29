# coding: utf-8

while True:
  line = list(map(int, input().split()))
  
  if line[0] == 0:
    break
  
  n, permutation = line[0], line[1:]
  message = input()
  
  while len(message) % n != 0:
    message += ' '
    
  encrypted = ['' for i in range(len(message))]
  
  for i in range(len(encrypted)):
    encrypted[i] = message[permutation[i % n] - 1]
    permutation[i % n] += n
    
  print("'%s'" % ''.join(encrypted))