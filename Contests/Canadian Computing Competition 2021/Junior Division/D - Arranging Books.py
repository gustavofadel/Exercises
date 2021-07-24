# coding: utf-8

s = input()
large = s.count('L')
medium = s.count('M')
notLarge = sum(s[i] != 'L' for i in range(large))
notMedium = sum(s[i] != 'M' for i in range(large, large + medium))
mediumInLarge = sum(s[i] == 'M' for i in range(large))
largeInMedium = sum(s[i] == 'L' for i in range(large, large + medium))

print(notLarge + notMedium - min(largeInMedium, mediumInLarge))