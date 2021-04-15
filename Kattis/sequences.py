# coding: utf-8

modulo = 10 ** 9 + 7
sequence = input()
count0 = count1 = countQ = inversions = 0
previous = pow2 = 1

for c in sequence:
  if c == '?':
    inversions = (((inversions * 2 % modulo) + (count1 * pow2 % modulo)) % modulo + (countQ * previous) % modulo) % modulo
    countQ += 1
    previous = pow2
    pow2 = (pow2 * 2) % modulo
    
  elif c == '1':
    count1 += 1
    
  else:
    if countQ > 0:
      inversions = (inversions + (count1 * pow2 % modulo) + (previous * countQ % modulo)) % modulo
      
    else:
      inversions = (inversions + count1) % modulo
      
    count0 += 1
    
print(inversions % modulo)