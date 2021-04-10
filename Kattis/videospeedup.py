# coding: utf-8

n, p, k = map(int, input().split())
t = [0] + list(map(int, input().split())) + [k]
original = 0
speed = 1

for i in range(n + 1):
  original += (t[i + 1] - t[i]) * speed
  speed += p / 100
  
print(original)