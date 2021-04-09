# coding: utf-8

n = int(input())
keywords = set()

for i in range(n):
  keywords.add(input().replace('-', ' ').lower())
  
print(len(keywords))