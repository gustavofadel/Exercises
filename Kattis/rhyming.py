# coding: utf-8

s = input()
e = int(input())
rhymes = set()

for i in range(e):
  words = input().split()
  
  if any(s.endswith(word) for word in words):
    rhymes.update(words)
    
p = int(input())

for i in range(p):
  last = input().split()[-1]
  print('YES') if any(last.endswith(rhyme) for rhyme in rhymes) else print('NO')