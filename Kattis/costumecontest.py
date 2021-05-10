# coding: utf-8

n = int(input())
responses = [input() for i in range(n)]
dictionary = dict()

for response in responses:
  dictionary[response] = dictionary.get(response, 0) + 1
  
dictionary = sorted(dictionary.items(), key = lambda x: x[1])

print('\n'.join(sorted(item[0] for item in dictionary if item[1] == dictionary[0][1])))