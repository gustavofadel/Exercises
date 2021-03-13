# coding: utf-8

for ct in range(int(input())):
  line = list(map(int, input().split()))
  k, outlets = line[0], line[1:]
  powered = outlets[0]
  
  for i in range(1, k):
    powered += outlets[i] - 1
    
  print(powered)