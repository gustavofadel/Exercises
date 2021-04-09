# coding: utf-8

fibonacci = [1, 2]
modulo = 10 ** 9 + 7

for i in range(2, 10001):
  fibonacci.append((fibonacci[i - 1] + fibonacci[i - 2]) % modulo)
  
for ct in range(int(input())):
  n = int(input())
  print(fibonacci[n])