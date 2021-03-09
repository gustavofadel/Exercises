# coding: utf-8

numbers = sorted(map(int, input().split()))
order = input()
answer = list()

for i in range(3):
  answer.append(numbers[ord(order[i]) - ord('A')])
  
print(*answer, sep = ' ')