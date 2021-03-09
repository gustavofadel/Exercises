# coding: utf-8

cards = input()
tablet = cards.count('T')
compass = cards.count('C')
gear = cards.count('G')

print(tablet * tablet + compass * compass + gear * gear + 7 * min(tablet, compass, gear))