import math
# s = [2,True,not True, [2,"p"]]

# s.append("oxiri")

# s.insert(0, "boshi")

# print(s)

# a = []

# s = 1

# while s != 0:
#     s = int(input("Sonni kiriting: "))
#     a.append(math.factorial(s))
# print(*a)
# a = math.pi

# print(a)

# a = input("Sonlarni kiriting: ")
# a = a.split()
# for i in range(len(a)):
#     a[i] = int(a[i])**3
# a.reverse()
# print(a)
# n = int(input())
# m = int(input())
# a , b= n, m
# while 1:
#     if(n == 1):
#         print(a);
#         break
#     elif m == 1:
#         print(b);
#         break
#     if n%2==0:
#         n/=2
#     else:
#         n*=3
#         n+=1
#     if m%2==0:
#         m/=2
#     else:
#         m*=3
#         m+=1
# a = int(input())
# for i in range(9999999999):
#     k = list(str(i))
#     print(k)
#     co = 0
#     for j in k:
        
#         co+=int(j)
#     if co == a:
#         print(k[0])
#         break

    
    
# dictionary = {"olma" : "apple", "banan":"banana", "nok": "pie", "qovoq":"kalla"}
# dictionary['qovun']= "melon"
# a = input()
# sunm = {"apple":1000, "banana":2000, "pie":1000, "kalla" : 0}
# sunm["melon"] = 1500

# sunm["melon"]+=500

# del sunm["melon"]
# dictionary[input("kerakli meva")] = [input(0)]
# print(p)


# a , evens, odds = list(input()), 0, 0
# a.reverse()
# for i in range(len(a)):
#     if i % 2 == 0:
#         evens+=int(a[i])
#     else:
#         odds+=int(a[i])
# if(odds == evens):
#     print("Yes")
# else:
#     print("No")
    
# def onmi(n):
    # a, c = list(n), 0;
    # for i in a:
        # c+=int(i)
    # if c==10:
        # return 1;
    # return 0
# a, g, i = int(input()), 1, 19
# if a==1:
    # print(19);
# while i!=a:  
    # if onmi(str(i)):
    #   i+=1
    

    
# n = {"mashina":"ferari", 'uy':'hech nima','ops':'lcs', 'mashina':'ferari'}
# for i ,j in n.items(): #ikkita qiymat qaytadi kalit va ozgaruvchi
#     print(f"{i.capitalize()}:{j.upper()}")

# for i in n.keys():  #mashina...
#     print(i)


# for i in n.values(): #ferari...
#     print(i)


# shop = {"olma": 2000,"anor":1000,'nok':500,'non':2600}
# count = 0
# get = ["cola","tuxum","non","olma","kartoshka"]
# for i in get:
#     if i in shop:
#         count+=shop[i];
#         print(i ,shop[i],"ga olindi\n")
#     else:
#         print(f"{i} dokonda mavjud emas\n")
# print(f'Hammasi {} s\'om boldi')


# a = []
# for i in set(a):
#     print(i,end=" ");




# def losi(h):
#     """list"""
#     j = []
#     for i in h:
#         j.append(f"{i} ketmonov")
#     return j;
# # print(i(3))
# n = ["mol", 'qo\'y', 'bolta', 'tesha', 'ketmon']
# n = losi(n)

# class Meme:
#     def __init__(self, noom, oom, qom):
#         self.ism = noom
#         self.lol = oom
#         self.iq = qom
        
        
# salom = Meme('hech', 'kim', 'yoq')
# print(salom.ism,salom.lol,salom.iq)

# alp = [1,2,1,3,5,1,8,2,4]
# print(alp)


# print(list({1:2,56:6,45:8}.items()))

# a = {1:2,56:6,45:8}
# b = []
# for j in a:
#     b.append(g:=(j,a[j]))
# print(b)


# a = [1,2,3,4,5]
# b = [10,20,30,40,50]
# c = {}
# for i in range(len(a)):
#     c[a[i]] = b[i]
# print(c)

# summa = 1
# def fac(n):
#     global summa
#     summa *= n
#     if n == 1:
#         return summa
#     return fac(n-1)
# print(fac(4))


# a = int(input())
# n = 0
# for i in range(a-1):
#   p = input().split()
#   n += int(p[0])-int(p[1])
# print(n-int(input()))


# a = input().replace('0',' ')
# a = a.split()
# if len(a)==1:
#   print("YES")
# else:
#   print("NO")

# a = input().split()
# print(int(max(a,key=lambda x: int(x)))-int(min(a,key=lambda x: int(x))))



# a = input().split()
# for i in range(len(a)):
#   a[i] = int(a[i])
# c = sum(a)
# for i in range(len(a)):
#   a[i] = c-a[i]
# print(a[-1], a[0])


# n = int(input())
# if n%400==0 or n%4==0 and n%100!=0:
#   print('Kabisa yili')
# else:
#   print('Kabisa yili emas')


# n = int(input())
# for i in range(50,n):
#     if i + int(str(i)[1::])==n:
#         print(i, end=" ")

# a, s= int(input()), 1
# for i in range(a):
# 	for f in range(i):
#         print(s)
#         s+=1


# a = int(input())
# if a < 38:
#   print(a)
# else:
#   for i in range(a, a+5):
#     if i%5==0 and i-a<3:
#       a = i
#   print(a)

# dic = {
#     'Jasur':{'ism':"jasur", 'yosh':20},
#     'jasur2':{'ism':'jasur2', 'yosh':50},
#     'Iskandar':{'ism':"iskandar", 'yosh':16}
# }
# dt = {}
# for i in dic:
#     dt[i] = dic[i]['yosh']
#     print(i)
# print(dt)

# def summa(a:list):
#     a = list(str(a))
#     for i in range(len(a)):
#         a[i] = int(a[i])
#     return sum(a)

# a = int(input())
# if a < 10:
#     print(a)
# else:
#     i = 10
#     while summa(i)!=a:
#         i+=1
#     print(i)

# a = [1,2,3]
# b = ['a','b','c']
# c = ['+','-','/']
# dic = {}

# print(dic)

# a, c= input().split(), 0
# for i in range(len(a)):
#     a[i] = int(a[i])
#     if a[i]%2==0:
#         c+=a[i]//2
#     else:
#       	c+=a[i]//2+1
# print(c)


# a = input().split()
# a[0], a[1] = int(a[0]),int(a[1]) 
# if a[0]==a[1]:
#   print('=')
# elif a[0]>a[1]:
#   print('>')
# else:
#   print('<')


# a = int(input())
# s = str(a)
# if a > 0:
#     pass
# else:
#     for i in str(a):
        

   
        
# n = int(input())
# n = int((sqrt(9*n)-1)//2)
# print(n)

# i = input().split()
# a = int(i[0])
# i = int(i[1])
# if i%a==0:
#   print('YES')
# else:
#   print('NO')

# a = {'0':6,'1':2,'2':5,'3':5,'4':4,'5':5,'6':6,'7':3,'8':7,'9':6}
# b, c= input(),0
# for i in b:
#     c+=a[i]
# print(c)
    
# f = "(n-2)*180"
# n = int(input())
# print(eval(f))

# stt = input()
# a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
# for i in a:
#     print(f"{i} {stt.count(i)}")


# n = int(input())
# n = n%(25+6+15)
# if n < 22:
#     print("O__")
# elif n < 26 and n > 21:
#     print("OO_")
# elif n>25 and n<32:
#     print("_O_")
# else:
#     print("__O")
    
    
# ls = []
# ind = 1
# for i in range(7):
#     p=input().split()
#     ls.append(p)
#     if '1' in p:
#         ind = [p.index('1'),i]
# print(int(abs(3-ind[0]))+int(abs(3-ind[1])))


# ls = []
# x, o= 0, 0
# for i in range(3):
#     ls.append(a:=input())
#     x+=a.count('X')
#     o+=a.count("O")
# if x==o:
#     print("O")
# else:
#     print("X")
    
    
# def fib(n):
#   if n<=1:
#     return n
#   return fib(n-1)+fib(n-2)
# def co(a):
#   return(fib(a+1))
# print(co(int(input())))

# a = input().split()
# a,b = int(a[0]),int(a[1])
# count = 1
# for i in range(a):
#   count+=b
# print(count/1000000007)

# a = int(input())
# if a>99:
# 	print(a//100)
# else:
#   	print(a/100)


# formula 1


# e = 2.71828
# f = "((1/(x+(2/x**2)+(3/x**3)))+(e**(x**2+3*x)))/"


# a = input()
# def summa(i:int):
#     i = list(str(i))
#     co = 0
#     for j in i:
#         co+=int(j)
#     return co
# def pali(s:str):
#   a, b= int(s[:3:]),int(s[3::])
  
#   if summa(a)==summa(b):
#       return True
#   return False
# if len(a)==6 and pali(a):
# 	print("YES")
# else:
#   print("NO")



# a = input().split()
# for i in range(len(a)):
#   a[i] = int(a[i])
# c = sum(a)
# a.sort()
# for i in range(len(a)):
#   a[i] = c-a[i]
# print(a[-1], a[0])


# a = int(input())
# s,m,sec=0,0,0
# s = a//3600
# a %=3600
# m = a//60
# a%=60
# sec = a
# if len(str(m))==1:
#     m = f'0{m}'
# if len(str(sec))==1:
#     sec = f'0{sec}'
# s%=24
# print(f'{s}:{m}:{sec}')




# n = int(input())
# for i in range(n):
#     p = input()
#     p = input().split()
#     c = p.copy()
#     p.sort(key=lambda x:int(x))
#     coun = 0
#     for i in range(len(p)):
#         if c[i]!=p[i]:
#             coun+=1
#     print(coun)
# st = input()
# print(len(st))
# for i in st:
#     print(format(ord(i), 'b'))
# print(''.join(format(ord(x), 'b') for x in st))




# a = input().split()
# a,b=int(a[0]),int(a[1])
# print(gcd(a,7))

# a = list(range(int(input())+1))
# print(sum(a))


# a = input().split()
# print(int(a[0])**int(a[1]))



# a = ['G','C','V']
# for i in range(int(input())):
#     a[0],a[1],a[2] = a[2],a[0],a[1]
# print(''.join(a))

# co , n = 0,int(input())
# for i in range(1,n+1):
#     if n%i==0:
#         co+=i
# print(co)
           
           
# a = input().split()
# print(int(max(a,key=lambda x:int(x)))-int(min(a,key=lambda x:int(x)))) 

# a, b=int(input()),int(input())
# if a>b:
#     print('>')
# elif b>a:
#     print('<')
# else:
#     print('=')


# a = input().split()
# if int(a[0])+int(a[1])<int(a[2]):
#     print('Impossible')
# else:
#     print(int(a[0])+int(a[1])-int(a[2]))

# input()
# a = input().split()
# for i in range(len(a)):
#     a[i]=int(a[i])
# a.sort(reverse=True)
# print(*a)


# a = int(input())
# if a>=0:
#     print(sum(list(range(1,a+1))))
# else:
#     a = a*(-1)
#     print(f"-{sum(list(range(1,a+1)))}")
    
# x,co=input().split(),0
# for i in range(len(x)):
#     x[i] = int(x[i])
#     if x[i] >727 or x[i]<94:
#         print('Error')
#         co+=1
#         break
# if co==0:
#     print(max(x))
    

# x = int(input())
# p=[]
# for i in range(x):
#     p.append(int(input()))
# if x==p.count(min(p,key=p.count)):
#     print(0)
# else:
#     print(p.count(min(p,key=p.count)))
# input()
# s = input().split()
# for i in range(len(s)):
#     s[i]=int(s[i])
# print(*s[::-1])

# b=input().split()
# a,b=int(b[0]),b[1]
# print(f'{b[:a-1:]}{b[a::]}')

# n = input().split('1')
# print(len(max(n,key=len)))


# x=list(input())
# for i in range(len(x)):
#     x[i] = int(x[i])
# if sum(x[:3:])==sum(x[3::]):
#     print("YES")
# else:
#     print("NO")

# num = 2.7182818284590452353602875
# print(round(num, int(input())))

# i = input().split()
# print(max(i,key=lambda x:int(x)))


# a = input()
# if a[0].islower():
#     print(a.upper())
# else:
#     print(a.lower())

# n = int(input())
# for i in range(n):
#     a = input().split()
#     a , b = int(a[0]),int(a[1])
#     print(19*b+(a+239)*(a+366)//2)

# a, co = int(input()),0
# for i in range(100):
#     if 2**i==a:
#         co += 1
#         print("YES")
#         break
# if co==0:
#     print("NO")

# a=input()
# p = ['q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m']
# if a!='m':
#     print(p[p.index(a)+1])
# else:
#     print('q')
# print(len(p))

# a ,crash= 437,0
# input()
# p = input().split()
# for i in range(len(p)):
#     if int(p[i])<=a:
#         print(f"Crash {i+1}")
#         crash+=1
#         break
# if crash==0:
#     print("No crash")



# input()
# u = input().split()

# ls=[]
# co=0
# input()
# a = input().split()
# for i in a:
#     if int(i)>0:
#         co+=1
#     else:
#         ls.append(co)
#         co=0
# print(max(ls))
    
    
# ism = input()
# familiya = input()
# print(f"{ism[:len(ism)//2:]}{familiya[len(ism)//2::]} {familiya[:len(familiya)//2:]}{ism[len(familiya)//2::]}")

# a = int(input())
# if a==0:
#     print(1)
# else:    
#     if a>=0:
#         print(sum(list(range(1,a+1))))
#     else:
#         a = a*(-1)
#         print(f"-{sum(list(range(1,a+1)))-1}")


# l = int(input('Sonni kiriting '))
# for i in range(1,l+1):
#     for j in range(i):
#         print(i,end=" ")
#     print()

# i = int(input())
# ls = 0
# for i in range(i):
#     ls+=input().count('1')
# print(ls)

# p = input().split('/')
# print(str(bin(int(p[0])))[2::],end='/')
# print(str(bin(int(p[1])))[2::],end='/')
# print(str(bin(int(p[2])))[2::],end='')

# ls=[]
# n = int(input())
# for i in range(n):
#     ls.append(input().split())

# for i in ls:
#     print(i)


# def hget_time(n:str)->str:
#     # hour 5
#     n = n.split(':')
#     m = str(n[0])
#     m+=1
#     if m==24:
#         m = 0
#     return f'{m}:{n[1]}:{n[2]}'
# def mget_time(n:str)->str:
#     # minut 5
#     n = n.split(':')
#     m = n[1]
#     m+=1
#     if m == 60:
#         m=0
        
# def sget_time(n:str)->str:
#     # hour
    
# class Time:
#     def __init__(self,time:str) -> None:
#         self.hour=int(time.split(':')[0])
#         self.minut=int(time.split(':')[1])
#         self.secund=int(time.split(':')[2])

#     def hsur(self):
#         self.hour+=5
#         self.hour%=24
        
#     def msur(self):
#         self.minut+=5
#         if self.minut>59:
#             self.minut%=60
#             self.hour+=1
#         self.hour%=24
            
#     def ssur(self):
#         self.secund+=5
#         if self.secund > 59:
#             self.secund%=60
#             self.minut+=1
#             if self.minut==60:
#                 self.hour+=1
#                 self.hour%=24
#                 self.minut=0
        
#     def __str__(self) -> str:
#         hourr=str(self.hour).zfill(2)
#         min=str(self.minut).zfill(2)
#         sec=str(self.secund).zfill(2)
#         return f'{hourr}:{min}:{sec}'




# a = Time(input())
# print("Soat:",a)
# print("Minut:")
# print("Sekund:")



# n = int(input())
# ls = []
# for i in range(n):
#     x = input().split()
#     if x[1]!='0':
#         ls.append(x)
#     else:
#         ls.append([-1,-1])
# print(ls.index(max(ls,key=lambda x:int(x[0])))+1)






# a = input()
# a,b=a[0],int(a[1])
# dic = {'A':1,'B':2,'C':3,'D':4,'E':5,'F':6,'G':7,'H':8}
# if b%2==0 and dic[a]%2==0 or b%2==1 and dic[a]%2==1:
#     print('BLACK')
# else:
#     print("WHITE")

# def sur(a:str)->str:
#     alpha=list("abcdefghijklmnopqrstuvwxyz")
#     betta=[i.upper() for i in alpha]
#     if a not in alpha and a not in betta:
#         return a
#     else:
#         if a.islower():
#             if a=='z':
#                 return 'a';
#             else:
#                 return alpha[alpha.index(a)+1]
#         else:
#             if a=='Z':
#                 return 'A'
#             else:
#                 return alpha[alpha.index(a)+1]
            
# st = input()
# sa = []
# for i in list(st):
#     sa.append(sur(i))
# print(''.join(sa))

# l = input()
# c = 0
# for i in l:
#     if i in ['0','6','9']:
#         c+=1
#     elif i == '8':
#         c+=2
# print(c)

# parol = input()
# if len(parol)<12:
#     print("No")
#     exit()
# ls_digit = ['0','1','2','3','4','5','6','7','8','9']
# katta_c=0
# kichik_c=0
# raqam_c=0
# for i in ls_digit:
#     if i in parol:
#         raqam_c+=1
#         break
# if raqam_c==0:
#     print("No")
#     exit()
# for i in parol:
#     if i.islower():
#         kichik_c+=1
#     elif i.isupper():
#         katta_c+=1
# if kichik_c==0:
#     print("No")
#     exit()
# if katta_c==0:
#     print("No")
#     exit()
# print('Yes')
        
# a = int(input())
# ls = input().split()
# a = int(input())
# for i in range(a):
#     k = input().split()
#     k,l=int(k[0]),int(k[1])
#     print(*ls[k-1:l])

# unli = ['e','u','i','o','a']
# undosh=['q','w','r','t','y','p','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m']
# st = list(input())
# u,un = 0,0
# uls,unls = [],[]
# for i in st:
#     if i in unli:
#         un+=1
#     else:
#         unls.append(un)
#         un=0
# for i in st:
#     if i in undosh:
#         u+=1
#     else:
#         uls.append(u)
#         u=0
# print(0)


# ip = input().split('.')
# for i in ip:
#     try:
#         i = int(i)
#     except:
#         print('Bad')
#         exit()
#     if i > 255:
#         print("Bad")
#         exit()
# print('Good')

# sp = input()
# if sp[0]=='x':
#     if '+'in sp:
#         a = eval(f"{sp.split('=')[-1]}-{sp.split('=')[0][2::]}")
#         print(a)
#     else:
#         a = eval(f"{sp.split('=')[-1]}+{sp.split('=')[0][2::]}")
#         print(a)
# else:
#     if '-'in sp:
#         a = eval(f"{sp.split('+')[0]}-{sp.split('=')[-1]}")
#         print(a)
#     else:
#         a = eval(f"{sp.split('=')[-1]}-{sp.split('+')[0]}")
#         print(a)

# n = int(input())
# ls = []
# co = 0
# for i in range(n):
#     a = input().split()
#     if int(a[1])==0:
#         a[0] = 0
#         co+=1
#     ls.append(int(a[0]))
# if co == n:
#     print('-1')
#     exit()
# a = max(ls)
# for i in range(len(ls)):
#     if a==ls[i]:
#         print(i+1)
#         break

# input()
# ls = input().split()
# for i in range(len(ls)):
#     ls[i] = int(ls[i])
# c_max,co=0,0
# print(ls)
# for i in ls:
#     if i>0:
#         co+=1
#     else:
#         if c_max<=co:
#             c_max=co
#         co=0
# print(c_max)


# a = int(input())
# if a<10:
#     print(0)
# else:    
#     print(str(a)[-2])

# a, c= input(),0
# for i in a:
#     c+=int(i)
# print(c)

# n = int(input())
# if n%10==0:
#     print(n//10)
# else:
#     print(n//10+1)

# i = input().split()
# a,b = int(i[0]),int(i[1])
# if a<=0:
#     print(109)
# else:
#     a = a*b
#     if a>109:
#         a -= 109
#     if a==11:
#         print(12)
#     else:    
#         print(a)
 
# from math import *

# a = input().split()
# x1,y1=int(a[0]),int(a[1])
# x2,y2=int(a[2]),int(a[3])
# print(int(sqrt(((x2-x1)**2 + (y2-y1)**2))))

# a = int(input())
# i = 1
# print(1,end=" ")
# while i*2 <= a:
#     print(i*2,end=' ')
#     i*=2

# def top(n:int):
#     i = 2
#     while n%i!=0:
#         i+=1
#     print(i)
# top(int(input()))

# dic = {
#     0 : 0,
# 1 : 1,
# 2 : 1,
# 3 : 2,
# 4 : 3,
# 5 : 5,
# 6 : 8,
# 7 : 13,
# 8 : 21,
# 10 : 55 ,
# 11 : 89,
# 12 : 144,
# 13 : 233,
# 14 : 377 ,
# 15 : 610,
# 16 : 987 ,
# 17 : 1597,
# 18 : 2584,
# 19 : 4181,
# 20 : 6765 ,
# 21 : 10946,
# 22 : 17711,
# 23 : 28657,
# 24 : 46368,
# 25 : 75025,
# 26 : 121393,
# 27 : 196418,
# 28 : 317811,
# 29 : 514229,
# 30 : 832040
# }
# print(dic[int(input())])

# def is_digit(a:str):
#     if a <= 'z' and a>='a' or a <= 'Z' and a>='A':
#         return True
    
#     return False

# a, c= input().split(),0
# for i in range(3):
#     if is_digit(a[i]):
#         c+=1
# print(c)

# print(str(bin(int(input())))[2:].count('1'))