# coding: utf-8

while True:
  n = int(input())
  
  if n == 0:
    break
  
  first = [int(input()) for i in range(n)]
  second = [int(input()) for i in range(n)]
  sortedFirst = sorted(first.copy())
  sortedSecond = sorted(second.copy())
  correspondences = dict()
  
  for i in range(n):
    correspondences[sortedFirst[i]] = sortedSecond[i]
    
  for i in range(n):
    print(correspondences[first[i]])
    
  print()