# coding: utf-8

wc, hc, ws, hs = map(int, input().split())

print(int(ws <= wc - 2 and hs <= hc - 2))