# coding: utf-8

n = int(input())
horizontal = [input() for i in range(n)]
vertical = ['' for i in range(n)]

for i in range(n):
  for j in range(n):
    vertical[i] += horizontal[j][i]

correct = 1

for i in range(n):
  if 'BBB' in horizontal[i] or 'WWW' in horizontal[i] or horizontal[i].count('B') != horizontal[i].count('W'):
    correct = 0
    
for i in range(n):
  if 'BBB' in vertical[i] or 'WWW' in vertical[i] or vertical[i].count('B') != vertical[i].count('W'):
    correct = 0
    
print(correct)