# coding: utf-8

def isArithmetic (sequence):
  difference = sequence[1] - sequence[0]
  
  for i in range(2, len(sequence)):
    if sequence[i] - sequence[i - 1] != difference:
      return False
      
  return True
  
n = int(input())

for i in range(n):
  line = list(map(int, input().split()))
  sequence = line[1:]
  
  if isArithmetic(sequence):
    print('arithmetic')
    
  elif isArithmetic(sorted(sequence)):
    print('permuted arithmetic')
    
  else:
    print('non-arithmetic')