# coding: utf-8

for ct in range(int(input())):
  k, number = input().split()
  octal = int(number, 8) if '8' not in number and '9' not in number else 0
  
  print(k, octal, int(number), int(number, 16))