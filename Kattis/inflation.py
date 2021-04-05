# coding: utf-8

n = int(input())
c = sorted(map(int, input().split()))
balloons = [c[i] / (i + 1) for i in range(n)]

print(min(balloons)) if max(balloons) <= 1 else print('impossible')