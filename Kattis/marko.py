# coding: utf-8

keys = {letter: (position // 3) + 2 for position, letter in enumerate('abcdefghijklmnopqrtuvwxy')}
keys['s'] = 7
keys['z'] = 9

n = int(input())
dictionary = dict()

for i in range(n):
  word = ''.join(str(keys[letter]) for letter in input())
  dictionary[word] = dictionary.get(word, 0) + 1
  
print(dictionary[input()])