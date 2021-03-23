# coding: utf-8

words = input().split()
count = 0

for word in words:
  if 'ae' in word:
    count += 1
    
percentage = count / len(words) * 100

print('dae ae ju traeligt va') if percentage >= 40 else print('haer talar vi rikssvenska')