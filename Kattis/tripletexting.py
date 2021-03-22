# coding: utf-8

message = input()
length = len(message) // 3
firstWord = message[0 : length]
secondWord = message[length : 2 * length]
thirdWord = message[2 * length : 3 * length]

if firstWord == secondWord or firstWord == thirdWord:
  print(firstWord)
  
elif secondWord == thirdWord:
  print(secondWord)