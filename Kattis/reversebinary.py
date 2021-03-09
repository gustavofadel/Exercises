# coding: utf-8

n = int(input())
binary = bin(n)[2:]

print(int(binary[::-1], 2))