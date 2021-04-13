# coding: utf-8

from collections import namedtuple

attributes = input().split()
Song = namedtuple('Song', attributes)
songs = list()
m = int(input())

for i in range(m):
  songs.append(Song(*input().split()))
  
n = int(input())

for i in range(n):
  attribute = input()
  
  songs.sort(key = lambda x: getattr(x, attribute))
  
  print(*attributes)
  print('\n'.join(' '.join(song) for song in songs), end = '\n\n')