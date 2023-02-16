mikrob = 1
daqiqa, soat = 0,0
n = int(input())
while mikrob < n:
    mikrob*=2
    daqiqa+=1
    if daqiqa==60:
        soat += 1
        daqiqa = 0
daqiqa-=1
if soat!=0:
    print(f"{soat} soat {daqiqa} daqiqa")
elif soat!=0 and daqiqa==0:
    print(f"{soat} soat")
elif soat==0:
    print(f"{daqiqa} daqiqa")