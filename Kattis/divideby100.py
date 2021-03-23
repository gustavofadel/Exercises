# coding: utf-8

n = input()
m = input()
nLength = len(n)
mLength = len(m) - 1

if nLength > mLength:
  answer = n[0 : nLength - mLength] + '.' + n[nLength - mLength : nLength]

elif nLength == mLength:
  answer = '0.' + n

else:
  answer = '0.' + '0' * (mLength - nLength) + n
  
i = -1

while answer[i] == '0':
  i -= 1
  
if i == -1:
  print(answer)
  
elif answer[i] == '.':
  print(answer[0 : i])
  
else:
  print(answer[0 : i + 1])