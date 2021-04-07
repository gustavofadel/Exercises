# coding: utf-8

n = int(input())
previous = input()
words = set()
words.add(previous)

for i in range(n - 1):
  current = input()
  
  if current in words or previous[-1] != current[0]:
    print('Player', ((i + 1) % 2) + 1, 'lost')
    exit()
  
  previous = current
  words.add(previous)
  
print('Fair Game')