# coding: utf-8

for ct in range(int(input())):
  input()
  
  n = int(input())
  candies = [int(input()) for i in range(n)]
  
  print('YES') if sum(candies) % n == 0 else print('NO')