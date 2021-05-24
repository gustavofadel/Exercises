# coding: utf-8

n = int(input())
cards = sorted(map(int, input().split()))
score = cards[0]

for i in range(1, n):
  if cards[i] != cards[i - 1] + 1:
    score += cards[i]
    
print(score)