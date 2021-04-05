# coding: utf-8

frequency = [0 for i in range(26)]
string = input()

for character in string:
  frequency[ord(character) - ord('a')] += 1
  
frequency.sort(reverse = True)

print(len(string) - (frequency[0] + frequency[1]))