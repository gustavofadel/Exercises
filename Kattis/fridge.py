# coding: utf-8

digits = input()
count = [0 for i in range(10)]

for digit in digits:
  digit = int(digit) - 1
  
  if digit < 0:
    digit = 9
    
  count[digit] += 1
  
if 0 in count:
  print(count.index(0) + 1)

else:
  minIndex = count.index(min(count))
  
  if minIndex == 9:
    print('1' + '0' * (count[minIndex] + 1))
    
  else:
    print(str(minIndex + 1) * (count[minIndex] + 1))