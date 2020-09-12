# UVA 441 - Lotto

ls = list()
n = 1


def BT(i, s):
    global ls
    global n

    if i == n:
        if len(s.split()) == 6:
            print(*list(s.split()))
        return

    BT(i + 1, s + str(ls[i]) + " ")
    BT(i + 1, s)


mls = list()
nls = list()
while 1:
    ls = list(map(int, input().split()))
    n = ls[0]
    if not n:
        break
    mls.append(sorted(ls[1:ls[0] + 1:]))
    nls.append(n)

tl = len(mls)
for h in range(tl):
    ls = mls[h]
    n = nls[h]
    BT(0, "")
    if h < tl - 1:
        print()
