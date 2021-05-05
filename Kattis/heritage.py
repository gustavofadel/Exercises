# coding: utf-8

modulo = 10 ** 9 + 7

def countMeanings (word, memoization = dict()):
  if word in memoization:
    return memoization[word]
    
  meanings = dictionary.get(word, 0)
  
  for i in range(1, len(word)):
    left, right = word[:i], word[i:]
    
    if left in dictionary:
      meanings += dictionary[left] * countMeanings(right)
      
  memoization[word] = meanings % modulo
  return memoization[word]

n, w = input().split()
dictionary = dict()

for i in range(int(n)):
  word, meanings = input().split()
  dictionary[word] = int(meanings)
  
print(countMeanings(w))