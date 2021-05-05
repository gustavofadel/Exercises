# coding: utf-8

n = int(input())
cards = list(map(int, input().split()))
answer = normalSum = reversedSum = 0

for i in range(n):
  normalSum += cards[i]
  answer = max(answer, normalSum / (i + 1))
  
for i in range(n - 1, -1, -1):
  reversedSum += cards[i]
  answer = max(answer, reversedSum / (n - i))
  
print(answer)