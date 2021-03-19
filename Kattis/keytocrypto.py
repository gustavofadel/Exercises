# coding: utf-8

ciphertext = input()
key = input()
message = ''

for i in range(len(ciphertext)):
  move = ((ord(ciphertext[i]) - ord('A')) - (ord(key[i]) - ord('A'))) % 26
  message += chr(ord('A') + move)
  key += chr(ord('A') + move)
  
print(message)