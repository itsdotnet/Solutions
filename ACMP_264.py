a = input()
f = list(map(int, input().split()))
f.append(-1)
max, count = 0, 0
for i in f:
    if i > 0:
        count+=1
    else:
        if max<count:
            max=count
        count=0
print(max)