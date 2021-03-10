# coding: utf-8

n = int(input())
c = sorted([int(input()) for i in range(n)], reverse = True)
price = 0

for i in range(n):
  if i % 3 != 2:
    price += c[i]

print(price)