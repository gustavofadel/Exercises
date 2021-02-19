# coding: utf-8

pacotes = list()
pacotes.append(float(input()) * 10)
pacotes.append(float(input()) * 10)
pacotes.append(float(input()) * 10)
pacotes.append(float(input()) * 10)
pacotes.sort()
a, b, c, d = pacotes

print('YES') if a + b + c == d or a + d == b + c or a + c == b + d else print('NO')