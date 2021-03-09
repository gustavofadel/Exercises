# coding: utf-8

h, m = map(int, input().split())
hours = h
minutes = (m - 45)

if minutes < 0:
  minutes += 60
  hours -= 1
  
if hours < 0:
  hours += 24
  
print(hours, minutes)