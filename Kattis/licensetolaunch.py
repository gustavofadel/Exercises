# coding: utf-8

n = int(input())
junk = list(map(int, input().split()))

print(junk.index(min(junk)))