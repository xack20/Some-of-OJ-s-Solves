vs = ["`1234567890-=","QWERTYUIOP[]\\","ASDFGHJKL;'","ZXCVBNM,./"]
while True:
  try:
    s = input()
    for i in s:
      if i==' ':
        print(' ',end='')
        continue
      for j in vs:
        if i in j:
          print(j[j.index(i)-1],end='')
    print()
  except EOFError:
    break 