# coding: utf-8

current = list(map(int, input().split(':')))
explosion = list(map(int, input().split(':')))

if explosion[2] < current[2]:
  explosion[1] -= 1
  
if explosion[1] < current[1]:
  explosion[0] -= 1
  
hours = (explosion[0] - current[0] + 24) % 24
minutes = (explosion[1] - current[1] + 60) % 60
seconds = (explosion[2] - current[2] + 60) % 60

if hours == minutes == seconds == 0:
  hours = 24

print('%02d:%02d:%02d' % (hours, minutes, seconds))