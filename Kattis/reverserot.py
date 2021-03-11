# coding: utf-8

alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ_.'

while True:
  line = input().split()
  
  if line[0] == '0':
    break
  
  n, message = int(line[0]), line[1][::-1]
  encrypted = ''
  
  for i in range(len(message)):
    if message[i] == '_':
      position = 26
      
    elif message[i] == '.':
      position = 27
      
    else:
      position = ord(message[i]) - ord('A')
    
    encrypted += alphabet[(position + n) % 28]
    
  print(encrypted)