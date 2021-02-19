# coding: utf-8

n = int(input())
figurinhas = list()

for i in range(n):
  figurinhas.append(int(input()))

print(len(set(figurinhas)))
print(len(figurinhas) - len(set(figurinhas)))