# coding: utf-8

n, m = map(int, input().split())
lists = [input().split() for i in range(n)]
sets = list(map(lambda x: set(x), lists))
items = set.intersection(*sets)

print(len(items))
print('\n'.join(sorted(items)))