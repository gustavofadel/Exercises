# coding: utf-8

from collections import defaultdict

n = int(input())
domjudge = defaultdict(int)
kattis = defaultdict(int)

for i in range(n):
  result = input()
  domjudge[result] += 1
  
for i in range(n):
  result = input()
  kattis[result] += 1
  
same = 0

for result in set(domjudge):
  if result in domjudge and result in kattis:
    same += min(domjudge[result], kattis[result])
    
print(same)