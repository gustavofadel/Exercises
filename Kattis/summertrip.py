# coding: utf-8

count = 0
sequence = input()

for letter in 'abcdefghijklmnopqrstuvwxyz':
  firstOccurence = sequence.find(letter)
  
  if firstOccurence == -1:
    continue
  
  seen = set()
  
  for i in range(firstOccurence + 1, len(sequence)):
    if sequence[i] == letter:
      seen = set()
      
    else:
      if sequence[i] not in seen:
        count += 1
        seen.add(sequence[i])

print(count)