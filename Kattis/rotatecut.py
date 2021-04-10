# coding: utf-8

for ct in range(int(input())):
  n, sentence = input().split()
  length = len(sentence)
  n = min(int(n), 24)
  
  for i in range(n):
    length -= length // 4
    sentence = sentence[::-1][:length]
    
  if n & 1 == 1:
    sentence = sentence[::-1]
    
  print(sentence)