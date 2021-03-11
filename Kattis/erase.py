# coding: utf-8

n = int(input())
before = int(input(), 2)
after = int(input(), 2)
result = bin(after ^ before)[2:]

print('Deletion succeeded') if (n % 2 == 0 and '1' not in result) or (n % 2 == 1 and '0' not in result) else print('Deletion failed')