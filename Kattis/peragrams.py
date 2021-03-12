# coding: utf-8

string = input()
frequency = [0 for i in range(26)]
odds = 0

for i in range(len(string)):
  frequency[ord(string[i]) - ord('a')] += 1
  
for i in range(26):
  if frequency[i] % 2 == 1:
    odds += 1
    
print(max(0, odds - 1))