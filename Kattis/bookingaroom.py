# coding: utf-8

r, n = map(int, input().split())
available = list(range(1, r + 1))

for i in range(n):
  booked = int(input())
  available.remove(booked)
  
if len(available) == 0:
  print('too late')
  
else:
  print(available[0])