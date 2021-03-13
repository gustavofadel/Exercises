# coding: utf-8

n = int(input())
correct = [input() for i in range(n)]
score = 0

for i in range(1, n):
  if correct[i] == correct[i - 1]:
    score += 1
    
print(score)