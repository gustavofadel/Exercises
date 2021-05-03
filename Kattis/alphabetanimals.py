# coding: utf-8

previous = input()
n = int(input())
unused = [input() for i in range(n)]
canPlay = ''

for name in unused:
  if name[0] == previous[-1]:
    if canPlay == '':
      canPlay = name
      
    eliminate = not any(other[0] == name[-1] and other != name for other in unused)
    
    if eliminate:
      print(name + '!')
      exit()
      
print(canPlay) if canPlay != '' else print('?')