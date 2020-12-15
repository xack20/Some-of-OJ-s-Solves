n = int(input())
l1,l2,l3=(list(map(int,input().split())),list(map(int,input().split())),list(map(int,input().split())))
print(sum(l1)-sum(l2))
print(sum(l2)-sum(l3))