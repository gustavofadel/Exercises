# coding: utf-8

from datetime import datetime, timedelta

n = int(input())
diasJupiter, diasSaturno = int(n * 365.25 * 11.9), int(n * 365.25 * 29.6)
dataJupiter, dataSaturno = datetime(2020, 12, 21) + timedelta(days = diasJupiter),  datetime(2020, 12, 21)+ timedelta(days = diasSaturno)

print('Dias terrestres para Jupiter =', diasJupiter)
print('Data terrestre para Jupiter: %d-%02d-%02d' % (dataJupiter.year, dataJupiter.month, dataJupiter.day))
print('Dias terrestres para Saturno =', diasSaturno)
print('Data terrestre para Saturno: %d-%02d-%02d' % (dataSaturno.year, dataSaturno.month, dataSaturno.day))