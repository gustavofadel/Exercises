# coding: utf-8

n = int(input())
tb = lr = swords = 0

for i in range(n):
  slats = input()
  tb += int(slats[0] == '0') + int(slats[1] == '0')
  lr += int(slats[2] == '0') + int(slats[3] == '0')

while tb > 1 and lr > 1:
  tb -= 2
  lr -= 2
  swords += 1
  
print(swords, tb, lr)