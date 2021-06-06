# coding: utf-8

p, n, r = [int(input()) for i in range(3)]
days = 0
infection = people = n

while people <= p:
  people += (infection * r)
  infection *= r
  days += 1
  
print(days)