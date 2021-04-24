# coding: utf-8

n = int(input())
d = dict()

for i in range(n):
  word = input()
  
  print(d.get(word, 0))
  
  for j in range(1, len(word) + 1):
    d[word[:j]] = d.get(word[:j], 0) + 1