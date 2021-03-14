# coding: utf-8

k = int(input())
n = int(input())
time = 0

for i in range(n):
  t, z = input().split()
  t = int(t)
  
  time += t
  
  if time >= 210:
    print(k)
    break
  
  if z == 'T':
    k = k % 8 + 1