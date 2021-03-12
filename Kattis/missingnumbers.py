# coding: utf-8

n = int(input())
numbers = [int(input()) for i in range(n)]
missing = False

for i in range(1, max(numbers)):
  if i not in numbers:
    print(i)
    missing = True
    
if not missing:
  print('good job')