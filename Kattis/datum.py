# coding: utf-8

from datetime import date

d, m = map(int, input().split())

print(date(2009, m, d).strftime('%A'))