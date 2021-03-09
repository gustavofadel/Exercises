# coding: utf-8

numbers = set()

for i in range(10):
  number = int(input())
  numbers.add(number % 42)
  
print(len(numbers))