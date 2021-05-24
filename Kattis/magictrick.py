# coding: utf-8

count = [0 for i in range(26)]
s = input()

for c in s:
  count[ord(c) - ord('a')] += 1
  
print(int(not any(count[i] > 1 for i in range(26))))