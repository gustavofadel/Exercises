# coding: utf-8

n = int(input())
b = list(map(int, input().split()))

for i in range(n):
  unscrambled = 0
  
  for j in range(8):
    unscrambled |= ((b[i] ^ unscrambled) & (1 << j)) << 1
    
  print(unscrambled >> 1, end = ' ')