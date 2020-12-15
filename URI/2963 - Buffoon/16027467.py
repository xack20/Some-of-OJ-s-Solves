n = int(input())
ls = list()
for i in range(n):
  ls.append(int(input()))

if ls[0] == max(ls):
  print("S")
else : print("N")