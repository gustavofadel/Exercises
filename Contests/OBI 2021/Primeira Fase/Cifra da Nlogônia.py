consoants = 'bcdfghjklmnpqrstvxzz'
vowels = 'aeiou'
p = input()
res = ''
for c in p:
  if c in vowels:
    res += c
  else:
    dis = 26
    for v in vowels:
      if abs((ord(c) - ord('a')) - (ord(v) - ord('a'))) < dis:
        dis = abs((ord(c) - ord('a')) - (ord(v) - ord('a')))
        l = v
    res += c + l + consoants[consoants.index(c) + 1]
print(res)