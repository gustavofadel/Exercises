# coding: utf-8

k = int(input())
my = input()
friend = input()
total = len(my)
matches = 0

for i in range(total):
  if my[i] == friend[i]:
    matches += 1
    
print(total + min(matches, k) - max(matches, k))