# coding: utf-8

message = input()
first = list()
second = list()

for i in range(len(message) // 2):
  first.append(ord(message[i]) - ord('A'))
  
for i in range(len(message) // 2, len(message)):
  second.append(ord(message[i]) - ord('A'))
  
firstRotation = sum(first) % 26
secondRotation = sum(second) % 26

for i in range(len(first)):
  first[i] = (first[i] + firstRotation) % 26
  
for i in range(len(second)):
  second[i] = (second[i] + secondRotation) % 26
  
for i in range(len(first)):
  first[i] = (first[i] + second[i]) % 26
  
  print(chr(first[i] + ord('A')), end = '')
  
print()