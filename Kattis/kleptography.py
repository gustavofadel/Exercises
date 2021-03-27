# coding: utf-8

n, m = map(int, input().split())
text = list(' ' * (m - n) + input())
cipher = input()

for i in range(m - 1, n - 1, -1):
  text[i - n] = chr(ord('a') + (ord(cipher[i]) - ord(text[i]) + 26) % 26)
  
print(''.join(text))