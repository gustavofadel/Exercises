# coding: utf-8

words = input().split()

print('yes') if len(words) == len(set(words)) else print('no')