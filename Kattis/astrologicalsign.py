# coding: utf-8

for case in range(int(input())):
  day, month = input().split()
  
  if month == 'Dec':
    print('Sagittarius' if int(day) < 22 else 'Capricorn')
    
  elif month == 'Jan':
    print('Capricorn' if int(day) < 21 else 'Aquarius')
    
  elif month == 'Feb':
    print('Aquarius' if int(day) < 20 else 'Pisces')
    
  elif month == 'Mar':
    print('Pisces' if int(day) < 21 else 'Aries')
    
  elif month == 'Apr':
    print('Aries' if int(day) < 21 else 'Taurus')
    
  elif month == 'May':
    print('Taurus' if int(day) < 21 else 'Gemini')
    
  elif month == 'Jun':
    print('Gemini' if int(day) < 22 else 'Cancer')
    
  elif month == 'Jul':
    print('Cancer' if int(day) < 23 else 'Leo')
    
  elif month == 'Aug':
    print('Leo' if int(day) < 23 else 'Virgo')
    
  elif month == 'Sep':
    print('Virgo' if int(day) < 22 else 'Libra')
    
  elif month == 'Oct':
    print('Libra' if int(day) < 23 else 'Scorpio')
    
  else:
    print('Scorpio' if int(day) < 23 else 'Sagittarius')