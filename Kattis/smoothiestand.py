# coding: utf-8

k, r = map(int, input().split())
amount = list(map(int, input().split()))
largest = 0

for i in range(r):
  recipe = list(map(int, input().split()))
  ingredients, value = recipe[:-1], recipe[-1]
  largest = max(largest, min(amount[j] // ingredients[j] for j in range(k) if ingredients[j] != 0) * value)
  
print(largest)