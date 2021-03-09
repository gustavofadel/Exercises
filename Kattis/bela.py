# coding: utf-8

n, b = input().split()
points = 0
dominant = dict()
notDominant = dict()

dominant['A'] = 11
dominant['K'] = 4
dominant['Q'] = 3
dominant['J'] = 20
dominant['T'] = 10
dominant['9'] = 14
dominant['8'] = 0
dominant['7'] = 0

notDominant['A'] = 11
notDominant['K'] = 4
notDominant['Q'] = 3
notDominant['J'] = 2
notDominant['T'] = 10
notDominant['9'] = 0
notDominant['8'] = 0
notDominant['7'] = 0

for i in range(int(n)):
  cards = [input() for j in range(4)]
  
  for j in range(4):
    number, suit = cards[j]
    
    if suit == b:
      points += dominant[number]
      
    else:
      points += notDominant[number]
      
print(points)