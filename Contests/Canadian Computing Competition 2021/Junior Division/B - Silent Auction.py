# coding: utf-8

winner = ('', -1)

for i in range(int(input())):
  name = input()
  amount = int(input())
  
  if amount > winner[1]:
    winner = (name, amount)
    
print(winner[0])