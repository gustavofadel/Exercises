# coding: utf-8

def isHarshad (initial):
  digitsSum = sum(list(map(int, list(str(initial)))))
  
  return initial % digitsSum == 0
  
n = int(input())

while not isHarshad(n):
  n += 1
  
print(n)