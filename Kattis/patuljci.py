# coding: utf-8

numbers = [int(input()) for i in range(9)]
total = sum(numbers)

for i in range(8):
  for j in range(i + 1, 9):
    if numbers[i] + numbers[j] == total - 100:
      numbers[i] = numbers[j] = 0
      
print(*[number for number in numbers if number != 0], sep = '\n')