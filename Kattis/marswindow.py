# coding: utf-8

year = int(input())

print('yes' if (12 * (year - 2018) + 8) % 26 < 12 else 'no')