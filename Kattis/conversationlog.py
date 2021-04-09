# coding: utf-8

from collections import Counter, defaultdict

m = int(input())
userWords = defaultdict(set)
wordCounting = Counter()

for i in range(m):
  name, *words = input().split()
  
  for word in words:
    userWords[name].add(word)
    wordCounting[word] += 1
    
commonWords = set.intersection(*userWords.values())

if len(commonWords) > 0:
  print('\n'.join(sorted(commonWords, key = lambda x: (-wordCounting[x], x))))
  
else:
  print('ALL CLEAR')