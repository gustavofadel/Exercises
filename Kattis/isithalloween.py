# coding: utf-8

month, date = input().split()

print('yup') if (month == 'OCT' and date == '31') or (month == 'DEC' and date == '25') else print('nope')