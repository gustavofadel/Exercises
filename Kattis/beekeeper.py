# coding: utf-8

while True:
  n = int(input())
  
  if n == 0:
    break
  
  for i in range(n):
    word = input()
    doubles = word.count('aa') + word.count('ee') + word.count('ii') + word.count('oo') + word.count('uu') + word.count('yy')
    
    if i == 0 or doubles > favorite[0]:
      favorite = [doubles, word]
  
  print(favorite[1])