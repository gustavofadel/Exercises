# coding: utf-8

for ct in range(int(input())):
  string = input()
  
  for i in range(1, len(string) + 1):
    multiplier = int(len(string) // i) + 1
    substring = string[0 : i]
    
    if string == (substring * multiplier)[:len(string)]:
      print(i)
      break