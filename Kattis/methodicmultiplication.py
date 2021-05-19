# coding: utf-8

x, y = [input() for i in range(2)]
count = x.count('S') * y.count('S')

print('S(' * count + '0' + ')' * count)