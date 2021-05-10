# coding: utf-8

nextPossibleKeys = {
  '1': '1234567890',
  '2': '2356890',
  '3': '369',
  '4': '4567890',
  '5': '56890',
  '6': '69',
  '7': '7890',
  '8': '890',
  '9': '9',
  '0': '0'
}

def canEnter (n):
  for i in range(len(n) - 1):
    if n[i + 1] not in nextPossibleKeys[n[i]]:
      return False
  
  return True
  
for case in range(int(input())):
  left = right = int(input())
  
  while not canEnter(str(left)) and not canEnter(str(right)):
    left -= 1
    right += 1
    
  print(left if canEnter(str(left)) else right)