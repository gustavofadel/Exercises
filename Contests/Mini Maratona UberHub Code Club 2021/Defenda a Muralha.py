# coding: utf-8

x, y = map(int, input().split())
invaded = 0

for i in range(y):
  titanHeight = int(input())
  
  if titanHeight >  x:
    invaded += 1
    
print(invaded)