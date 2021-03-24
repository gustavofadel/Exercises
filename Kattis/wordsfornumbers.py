# coding: utf-8

dictionary = dict()
dictionary[0] = 'zero'
dictionary[1] = 'one'
dictionary[2] = 'two'
dictionary[3] = 'three'
dictionary[4] = 'four'
dictionary[5] = 'five'
dictionary[6] = 'six'
dictionary[7] = 'seven'
dictionary[8] = 'eight'
dictionary[9] = 'nine'
dictionary[10] = 'ten'
dictionary[11] = 'eleven'
dictionary[12] = 'twelve'
dictionary[13] = 'thirteen'
dictionary[14] = 'fourteen'
dictionary[15] = 'fifteen'
dictionary[16] = 'sixteen'
dictionary[17] = 'seventeen'
dictionary[18] = 'eighteen'
dictionary[19] = 'nineteen'
dictionary[20] = 'twenty'
dictionary[30] = 'thirty'
dictionary[40] = 'forty'
dictionary[50] = 'fifty'
dictionary[60] = 'sixty'
dictionary[70] = 'seventy'
dictionary[80] = 'eighty'
dictionary[90] = 'ninety'

for j in range(20, 100, 10):
  for i in range(1, 10):
    dictionary[i + j] = dictionary[j] + '-' + dictionary[i]
    
while True:
  try:
    line = input().split()
    
    for index, word in enumerate(line):
      if word.isdigit():
        output = dictionary[int(word)]
        
        if index == 0:
          output = output[0].upper() + output[1 : len(output)]
          
        print(output, end = ' ')
        
      else:
        print(word, end = ' ')
        
    print()
    
  except EOFError:
    break