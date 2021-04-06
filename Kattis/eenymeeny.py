# coding: utf-8

words = input().split()
n = int(input())
names = [input() for i in range(n)]
teams = [list() for i in range(2)]
position = 0

for i in range(n):
  position = (position + len(words) - 1) % len(names)
  teams[i % 2].append(names[position])
  names.pop(position)
  
for i in range(2):
  print(len(teams[i]))
  
  for name in teams[i]:
    print(name)