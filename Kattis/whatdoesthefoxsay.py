# coding: utf-8

for ct in range(int(input())):
  recording = input().split()
  
  while True:
    information = input()
    
    if information == 'what does the fox say?':
      break
    
    animal, goes, sound = information.split()
    recording = [word for word in recording if word != sound]
    
  print(' '.join(recording))