# coding: utf-8

width, partitions = map(int, input().split())
locations = [0] + list(map(int, input().split())) + [width]
possible = set()

for i in range(partitions + 2):
  for j in range(i + 1, partitions + 2):
    possible.add(locations[j] - locations[i])

print(*sorted(possible), sep = ' ')