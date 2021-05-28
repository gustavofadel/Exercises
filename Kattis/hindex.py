# coding: utf-8

n = int(input())
citations = sorted([int(input()) for i in range(n)], reverse = True)
hIndex = 0

for i in range(n):
  if citations[i] >= i + 1:
    hIndex = i + 1
    
  else:
    break
  
print(hIndex)