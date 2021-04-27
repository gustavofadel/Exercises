# coding: utf-8

n = int(input())
tea = list(map(int, input().split()))
m = int(input())
toppings = list(map(int, input().split()))
minimum = 2000

for i in range(n):
  for topping in map(int, input().split()[1:]):
    minimum = min(minimum, tea[i] + toppings[topping - 1])
    
x = int(input())
print(max(0, x // minimum - 1))