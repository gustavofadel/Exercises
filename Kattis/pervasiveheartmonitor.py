# coding: utf-8

while True:
  try:
    line = input().split()
    name = list()
    measurements = list()
    
    for word in line:
      if word.isalpha():
        name.append(word)
        
      else:
        measurements.append(float(word))
        
    print(sum(measurements) / len(measurements), ' '.join(name))
    
  except EOFError:
    break