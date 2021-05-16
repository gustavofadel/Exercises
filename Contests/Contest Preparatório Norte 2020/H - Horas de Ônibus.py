# coding: utf-8

t = int(input())
totalMinutes = 35 * 365 * 2 * t
totalHours, totalMinutes = totalMinutes // 60, totalMinutes % 60
totalDays, totalHours = totalHours // 24, totalHours % 24
totalYears, totalDays = totalDays // 365, totalDays % 365

print(totalYears, 'ano(s),', totalDays, 'dia(s),', totalHours, 'hora(s) e', totalMinutes, 'minuto(s)')