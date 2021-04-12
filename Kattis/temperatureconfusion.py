# coding: utf-8

from fractions import Fraction

a, b = map(int, input().split('/'))
celsius = (Fraction(a, b) - 32) * Fraction(5, 9)

print(celsius.numerator, celsius.denominator, sep = '/')