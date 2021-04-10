# coding: utf-8

from math import ceil, log2

n, k = map(int, input().split())

print('Your wish is granted!') if ceil(log2(n)) <= k else print('You will become a flying monkey!')