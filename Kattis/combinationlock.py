# coding: utf-8

while True:
  position, *combination = list(map(int, input().split()))
  
  if position == combination[0] == combination[1] == combination[2] == 0:
    break
  
  for i in range(3):
    combination[i] = 9 * ((combination[i] + 40 - position) % 40)
    
  print((360 - combination[0]) % 360 + (360 + combination[1] - combination[0]) % 360 + (360 + combination[1] - combination[2]) % 360 + 1080)