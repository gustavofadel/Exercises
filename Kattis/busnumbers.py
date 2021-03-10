# coding: utf-8

n = int(input())
numbers = sorted(map(int, input().split()))
i = 0

while i < n - 2:
  if numbers[i] + 2 == numbers[i + 2]:
    print(numbers[i], end = '-')
    
    j = i + 2
    
    while j < n - 1 and numbers[j] + 1 == numbers[j + 1]:
      j += 1
      
    print(numbers[j], end = ' ')
    
    i = j + 1
    
  else:
    print(numbers[i], end = ' ')
    
    i += 1
    
if i < n:
  print(*numbers[i:n], sep = ' ')

else:
  print()