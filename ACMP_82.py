input()
a = input()
a = str(reversed(a))
print(max(a,key=a.count),a.count(max(a,key=a.count)))