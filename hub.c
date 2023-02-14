#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
// long long int arr[10] = {};
// int tubmi(int n)
// {
// 	int count = 0;
//     if (n<2) return 0;
//   	for(int i = 2;i<n/2;i++)
//     {
//     	if(n%i==0)
//         {
//         	count++;
//           	break;
//         }
//     }
//   	if(count == 0) return 1;
//   	return 0;
// }
// int ison(char h)
// {
//     if(h=='j' || h=='k') return 1;
//     else return 0;
// }
// int ischap(char h)
// {
//     if(h=='f' || h=='d') return 1;
//     else return 0;
// }

// int fib(int n)
// {
//     if(n<=1)
//     {
//         return n;
//     }
//     return fib(n-1) + fib(n - 2);
// }
// int yol(int s)
// {
//     return fib(s + 1);
// }

// long long int yollar(int n, int m)
// {
//     if(n == 1 || m == 1)
//     {
//         return 1;
//     }
//     return yollar(m - 1, n) + yollar(m, n - 1);
// }


// void sort(char *arr, int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for(int j = 0;i < size - i - 1;j++)
//         {
//             if(arr[j] > arr[j+1])
//             {
//                 char temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
    
// }

// long long int rev(long long int n)
// {
//     int rever = 0;
//     for (long long int i = n;i; i/=10)
//     {
//         rever *= 10;
//         rever += i % 10;
//     }
//     return rever;
// }

// int xona(long long int n)
// {
//     int room = 0;
//     for (long long int i = n;i; i/=10)
//         room++;
//     return room;    
// }

// // void sana(long long int n)
// // {
// //     for(long long int i = n;i;i/=10)
// //     {
// //         switch(i%10)
// //         {
// //             case 0:
// //                 arr[0]++;
// //                 break;
// //             case 1:
// //                 arr[1]++;
// //                 break;
// //             case 2:
// //                 arr[2]++;
// //                 break;
// //             case 3:
// //                 arr[3]++;
// //                 break;
// //             case 4:
// //                 arr[4]++;
// //                 break;
// //             case 5:
// //                 arr[5]++;
// //                 break;
// //             case 6:
// //                 arr[6]++;
// //                 break;
// //             case 7:
// //                 arr[7]++;
// //                 break;
// //             case 8:
// //                 arr[8]++;
// //                 break;
// //             case 9:
// //                 arr[9]++;
// //                 break;
// //         }
// //     }
// // }
//     void mulsum(int x, int *sum, int *multi)
//     {
//         *sum = 0;
//         *multi = 1;
//         for (int i = x; i ; i/=10)
//         {
//             *sum += i%10;
//             *multi*=i%10;
//         }
        
//     }
//     void ikki(int lol)
//     {
//         int count = 0, zero = 0;
//         for (int i = lol; i ; i/=10)
//         {
//             if(i%10==0) zero++;
//             else count++;
//         }
//         if(zero==count) printf("(0)%d==%d", zero, count);
//         else if(zero>count) printf("(0)%d>%d", zero, count);
//         else if(zero<count)printf("(0)%d<%d", zero, count);

//     }
//     void uch(int ff)
//     {
//         int sum = 0, sum2 = 0, xona = 0;
//         for (int i = ff; i ; i/=10)
//         {
//             xona++;
//         }
//         for (int i = ff,j = xona; i ; i/=10, j--)
//         {
//             if(xona/2 >= j) sum+=i%10;
//             else sum2+=i%10;
//         }
        
//         if(sum > sum2) printf("%d>%d", sum, sum2);
//         else printf("%d<%d", sum, sum2);

//     }




    
    // int n, m;
    // scanf("%d%d", &n, &m);
    // printf("%lld", yollar(n, m));













    // int n, max = 0, count = 0;
    // char harf;
    // scanf("%d", &n);
    // char arr[n];
    // scanf(" %[^\n]s", arr);
    // for(int i = 0;arr[i] != '\0';i++)
    // {
    //     for(int j = 0;arr[j] != '\0';j++)
    //     {
    //         if(arr[j] == arr[i]) count++;
    //     }
    //     if(max < count)
    //     {
    //         harf = arr[i];
    //         max = count;
    //     }
    //     count = 0;
    // }
    // printf("%c %d", harf, max);


    // int n;
    // scanf("%d", &n);
    // char harf[1000] ={};
    // for (int i = 0; i < n; i++)
    // scanf("%c", &harf[i]);
    // int k;
    // int count, max=1;
    // for(int i=0; i<n; i++)
    // {
    //     count=0;
    //     for(int j=0; j<n; j++){
    //         if(harf[i] == harf[j])
    //             count++;
    // }
    // if(count > max)
    // {
    //     max = count;
    //     k=i;
    // }
    // }
    // printf("%c %d", harf[k], max);
 
    // char alp[1000000];
    // scanf("%[^\n]", alp);
    // int so = strlen(alp);
    // int index = 1;
    // for (int i = index; i < so - 1; i++)
    // {
    //     for (int j = index; j < so - i - 1; j++)
    //     {
    //         if (alp[j] < alp[j - 1]) 
    //         {
    //             int temp = alp[j];
    //             alp[j] = alp[j - 1];
    //             alp[j - 1] = temp;
    //         }
    //     }
    // }
    
    // printf("%s", alp);










// int a, counter = 0;
// scanf("%i", &a);
// for(unsigned long long  int i = a;;i+=a){
//     for(unsigned long long j = 1;j <= a;j++)
//     {
//         if(i%j==0)
//         {
//             counter++;
//         }
//     }
//     if(counter==a)
//     {
//         printf("%llu", i);
//         break;
//     }
//     counter = 0;
// }

    // int harakat, binos, boshl, ketbi, olren = 0;
    // scanf("%d%d%d", &binos, &harakat, &boshl);
    // int count = 0;
    // int javon[binos];
    // for (int i = 0; i < binos; i++)
    // {
    //     javon[i] = 0;
    // }
    
    // int rain = 2;
    // for(int i = 0;i < harakat;i++)
    // {
    //         if (rain==1) olren = 1;
    //         else olren = 0;            
    //         scanf("%d", &ketbi);//javon
    //         scanf("%d", &rain);//javon
    //         if(rain==1 && javon[boshl - 1] >= 1)
    //         {
    //             if(olren==0) javon[boshl - 1]--;
    //         }
    //         else if(rain==1 && javon[boshl - 1]==0 && olren==0)
    //         {
    //             count++;
    //         }
    //         if(rain==0 && olren==1) javon[boshl - 1]++;
    //         boshl = ketbi;
    // }
    // printf("%d", count);

    // int n;
    // scanf("%d", &n);
    // char ismlar[n][100];
    // for (int i = 0; i < 100*n; i++)
    // {
    //     ismlar[0][i] = '\0';
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     scanf(" %[^\n]", ismlar[i]);
        
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if(ismlar[i][0]>ismlar[i+1][0])
    //     {
    //         for (int j = 0; j <= strlen(ismlar[i]) || j <=4 strlen(ismlar[i+1]); j++)
    //         {
    //             char temp = ismlar[i][j];
    //             ismlar[i][j] = ismlar[i+1][j];
    //             ismlar[i+1][j] = temp;
    //         }
            
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d. %s\n", i+1, ismlar[i]);
    // }
 
// int n;
// scanf("%d", &n);
// int arr[n][5];
// for(int i = 0;i < 5 * n;i++)
// {
//     scanf("%d", &arr[0][i]);
// }
// for(int i = 0;i < n;i++)
// {
//     arr[i][2]*=arr[i][4];
//     arr[i][3]*=arr[i][4];
//     if(arr[i][1]-arr[i][0] >= arr[i][2] && arr[i][1]-arr[i][0] <= arr[i][3])
//     {
//         printf("%d\n", 1);
//     }
//     else printf("%d\n", 0);
// }
    // int n;
    // scanf("%d", &n);
    // long long int abr[n][3];
    // for(int i = 0; i < n * 3;i++)
    // {
    //     scanf("%lld", &abr[0][i]);
    // }
    // for(int i = 0;i < n;i++)
    // {
    //     if(sqrt(abr[i][0]*abr[i][0]+abr[i][1]*abr[i][1]) <= abr[i][2]+abr[i][2])
    //     {
    //         printf("%d\n", 1);
    //     }
    //     else printf("%d\n", 0);
    // }


// long long int n, xona = 0, re = 0;
// scanf("%lld", &n);
// for(long long int i = n;i;i/=10)
// {
//     xona++;
// }
// int arr[xona];
// // printf("%d", xona);
// printf("Hisob:\n");
// long long int j = 0;
// for(long long int i = n;i;i/=2)
// {
//     arr[j] = i % 2;
//     j++;
//     printf("%lld = %lld * %lld + %lld\n", i, 2, i/2, i%2);
// }
// for(int i = j;i >= 0;i--)
// {
//     re *= 10;
//     re += arr[i];
//     // printf("%d", arr[i]);
// }
// puts("Natija:");
// printf("%lld₁₀ = %lld₂", n, re);


    // int n;
    // scanf("%d", &n);
    // double indexX[100] = {}, indexY[] = {};
    // char rusum[100][100] = {};
    // int x=1, k;
    // double dic[100] = {};
    // for(int i=0; i<n; i++){
    //     scanf("%lf%lf %[^\n]s",&indexX[i],&indexY[i], rusum[i]);
    //     dic[i] = sqrt((indexX[i]*indexX[i]+indexY[i]*indexY[i]));
    // }
    // double min = dic[0];
    // for (int i = 0;i < n; i++)
    // {
    //     if(min > dic[i])
    //     {
    //         min = dic[i];
    //         k = i;
    //     }

    // }
    // printf("%s %.2f", rusum[k], min);
    


    // int t, count;
    // scanf("%d", &t);
    // for (int p = 0; p < t; p++)
    // {
    //     int n;
    //     scanf("%d", &n);
    //     int arr[n+1],brr[n];
    //     arr[0] = 0;
    //     int frr[n];
    //     for (int i = 1; i < n + 1; i++)
    //     {
    //         scanf("%d", &arr[i]);
    //         frr[i-1] = arr[i] - arr[i - 1];
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%d", &brr[i]);
    //         if(frr[i] >= brr[i]) count++;
    //     }
    //     printf("%d\n", count);
    //     count = 0;
    // }
    




    
    // int t;
    // scanf("%d", &t);
    // float sum = 0, ikki = 0;
    // for (int p = 0; p < t; p++)
    // {
    //     int n, count = 0;
    //     scanf("%d", &n);
    //     char arr[n][50];
    //     float brr[n] ;
    //     for (int i = 0; i < n; i++)
    //     {
    //         brr[i] = 0;
    //         count = 0;
    //         scanf(" %s", arr[i]);
    //             for (int j = 1; j < strlen(arr[i]); j++)
    //             {
    //                 if (ischap(arr[i][j]) && ison(arr[i][j-1]))
    //                 {
    //                     brr[i] += 0.4;
    //                 }
    //                 else if (ison(arr[i][j])  && ischap(arr[i][j-1]))
    //                 {
    //                     brr[i] += 0.4;
    //                 }
    //                 else if (ison(arr[i][j]) && ison(arr[i][j-1]))
    //                 {
    //                     brr[i] += 0.2;
    //                 }
    //                 else if (ischap(arr[i][j]) && ischap(arr[i][j-1]))
    //                 {
    //                     brr[i] += 0.2;
    //                 }
    //             }   
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         sum+=brr[i];
    //     }
    //     sum += 0.2 * n;
    //     printf("%.f", sum*10+1);
    // }






    // int n;
    // char kpp[1000], fpp[1000];
    // char ttp[1000] = {};
    // scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     int ind = 0, count = 0;
    //     scanf(" %[^\n]s", ttp);
    //     for (int i = 0;; i++)
    //     {
    //         if(isspace(ttp[i])) break;
    //         ind++;
    //     }
    //     strncpy(kpp, ttp, ind);
    //     strcpy(fpp, ttp+ind+1);
    //     if(strlen(kpp)!=strlen(fpp))
    //     {
    //         puts("NO");
    //         count++;
    //     }
    //     // printf("%d", ind);
    //     sort(kpp, ind);
    //     sort(fpp, ind);
    //     printf("%s\n%s", kpp, fpp);
        




//------------------------------------------------------------------

// unsigned long long n, xona = 0, re = 0;
// scanf("%lld", &n);
// for(unsigned long long i = n;i;i/=10)
// {
//     xona++;
// }
// unsigned long long arr[xona];
// // printf("%d", xona);
// printf("Hisob:\n");
// unsigned long long j = 0;
// for(unsigned long long i = n;i;i/=2)
// {
//     arr[j] = i % 2;
//     j++;
//     printf("%llu = %llu * %llu + %llu\n", i, 2, i/2, i%2);
// }
// for(int i = j;i >= 0;i--)
// {
//     re *= 10;
//     re += arr[i];
//     // printf("%d", arr[i]);
// }
// puts("Natija:");
// printf("%llu = %llu", n, re);
// -------------------------------------------------------------------

    // char a[10000] = "", b[10000] = "";
    // scanf("%s", a);
    // scanf("%s", b);
    // int k = , l;
    // double c = 0, d = 0;
    // printf("%s\n%s", a, b);
    

// int a, counter = 0;
// scanf("%d", &a);
// for(unsigned long i = a;;i+=a){
//     for(unsigned long j = 1;j <= a;j++)
//     {
//         if(i%j==0)
//         {
//             counter++;
//         }
//     }
//     if(counter==a)
//     {
//         printf("%lu", i);
//         break;
//     }
//     counter = 0;
// }

// int t;
// scanf("%d", &t);
// char ttp[10000] = {};
// char ptt[1000] = {}, ttf[1000] = {};
// for (int h = 0; h < t; h++)
// {
//     scanf(" %[^\n]s", ttp);
//     int k = strlen(ttp)/2;
//     strncpy(ptt, ttp, k);
//     if(strlen(ttp)%2==1) k++;
//     strcpy(ttf, ttp+k);
//     // printf("%s", ttf);
//     // printf("%s", ptt);
//     for (int i = 0; i < k - 1; i++)
//     {
//         for(int j = 0;j < k - 1 - i;j++)
//         {
//             if(ptt[j] < ptt[j+1])
//             {
//                 int temp = ptt[j];
//                 ptt[j] = ptt[j+1];
//                 ptt[j+1] = temp;
//             }
//             if(ttf[j] < ttf[j+1])
//             {
//                 int tepm = ttf[j];
//                 ttf[j] = ttf[j+1];
//                 ttf[j+1] = tepm;
//             }
//         }
//     }
//     int count = 0;
//     for (int i = 0; i < k; i++)
//     {
//         if(ttf[i]==ptt[i]) count++;
//     }
//     if(count==k) puts("YES");
//     else puts("NO");
    

// }


// long long n;
// scanf("%lld", &n);
// long long int arr[n];
// long long int sum = 0;
// long long int sum1 = 0;
// for (long long int i = 0; i < n; i++)
// {
//     scanf("%lld", &arr[i]);
// }
// for (long long int i = 0; i < n; i++)
// {
//     for (long long int j = 0; j < n; j++)
//     {
//         if(arr[i] <= arr[j])
//         {
//             sum1 += arr[i];
//         }
//     }
//     if(sum1 > sum) sum = sum1;
//     sum1 = 0;
// }
// printf("%lld", sum);


// char bir[3] = "bir";//                    1
// char ikki[4] = "ikki";//                     2
// char uch[3] = "uch";//                           3
// char tort[5] = "to'rt";//                          4
// char besh[4] = "besh";//                              5
// char olti[4] = "olti";//                                 6
// char yetti[5] = "yetti";//                           7
// char sakkiz[6] = "sakkiz";//                      8 
// char toqqiz[6] = "toqqiz";//                   9
// char on[3] = "o'n";//                      10


// char yigirma[7] = "yigirma";//                     20
// char ottiz[6] = "o'ttiz";//                           30
// char qirq[4] = "qirq";//                          40
// char ellik[5] = "ellik";//                              50
// char oltmish[7] = "oltmish";//                                 60
// char yetmish[7] = "yetmish";//                           70
// char sakson[6] = "sakson";//                      80
// char toqson[6] = "toqson";//                   90
// char yuz[3] = "yuz";//                      100


// char ming[4] = "ming";//                     1000

// char mill[7] = "million";//        1 000 000

// char bill[8] = "milliard";//      1 000 000 000


// long long int n;
// scanf("%lld", &n);
// n = rev(n);
// // printf("%d", n);
// for (long long int i = n; i ; i++)
// {
//     switch (i%10)
//     {
//     case 1:
//         printf("%s ", bir);
//         break;
//     case 2:
//         printf("%s ", ikki);
//         break;
//     case 3:
//         printf("%s ", uch);
//         break;
//     case 4:
//         printf("%s ", tort);
//         break;
//     case 5:
//         printf("%s ", besh);
//         break;
//     case 6:
//         printf("%s ", olti);
//         break;
//     case 7:
//         printf("%s ", yetti);
//         break;
//     case 8:
//         printf("%s ", sakkiz);
//         break;
//     case 9:
//         printf("%s ", toqqiz);
//         break;
//     default:
//         break;
//     }
//     switch (xona(i))
//     {
//     case 2:
        
//         break;
    
//     default:
//         break;
//     }
// }

// printf("%d", xona(n));





    // long long int n;
    // scanf("%lld", &n);
    // long long int arr[n];
    // for(int i = 0;i < n;i++) scanf("%lld", &arr[i]);
    // long long int min = arr[0];
    // long long int l = 0;
    // for(int i = 0;i < n;i++)
    // {
    //     if(min > arr[i])
    //     {
    //         min = arr[i];
    //         l = i;
    //     }
    // }
    // long long int max = arr[l];
    // for(int i = l;i < n;i++)
    // {
    //     if(max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // printf("%lld", max-min);



    // long long int n, m;
    // scanf("%lld%lld", &n, &m);
    // long double *a = calloc(1000000000000000000000000, 16);
    // long long int j = 0;
    // for(long long int i = n;i <= m;i++)
    // {
    //     a[j++] = i;
    // }
    // for(;j >= 0;j--)
    // {
    //     sana(a[j]);
    // }
    // for(int i = 0;i < 10;i++)
    // {
    //     printf("%d: %lld\n", i, arr[i]);
    // }




    // int n;
    // int sum, mult;
    // scanf("%d", &n);
    // mulsum(n, &sum, &mult);
    // printf("sum -> %d\nmulti -> %d", sum, mult);
    // uch(n);



    // char matn[1000] = {};
    // scanf("%[^\n]s", matn);
    // char *salom = strtok(matn, " ");
    // while (salom!=NULL)
    // {
    //     printf("%s ", salom);
    //     salom = strtok(NULL, " ");
    // }
    



    // int n;
    // scanf("%d", &n);
    // int arr[n][n];
    // for (int i = 0; i < n*n; i++)
    // {
    //     scanf("%d ", &arr[0][i]);
    // }
    // for (int i = 0, j = n - 1; i < n;j--, i++)
    // {
    //     arr[i][j] = 0;
    //     arr[i][i] = 0;   
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%d", arr[i][j]);
    //     }
        
    //     puts("");
    // }
    
    
    



    // char matn[1000] = {};
    // scanf("%[^\n]s", matn);
    // int count = 0;
    // for (int i = 0; matn[i] != '\0'; i++)
    // {
    //     if(isspace(matn[i]) && matn[i+1] >= 'A' && matn[i+1] <= 'Z')
    //     {
    //         count++;
    //     } 
    // }
    // printf("%d", count);
    


    // int n, index = 0;
    // scanf("%d", &n);
    // int arr[100] = {};
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if(arr[i]==0) 
    //     {
    //         index = i;
    //         break;
    //     }
    // }
    
    
    


    //₀₁₂₃₄₅₆₇₈₉

// long long int n, xona = 0, re = 0;
// scanf("%lld", &n);
// for(long long int i = n;i;i/=10)
// {
//     xona++;
// }
// int arr[xona];
// // printf("%d", xona);
// printf("Hisob:\n");
// long long int j = 0;
// for(long long int i = n;i;i/=2)
// {
//     arr[j] = i % 2;
//     j++;
//     printf("%lld = %lld * %lld + %lld\n", i, 2, i/2, i%2);
// }
// for(int i = j;i >= 0;i--)
// {
//     re *= 10;
//     re += arr[i];
//     // printf("%d", arr[i]);
// }
// puts("Natija:");
// printf("%lld₁₀ = %lld₂", n, re);

// int a, b;
// scanf("%d%d", &a,&b);
// for (int i = a; i <= b; i++)
// {
//     if (tubmi(i))
//     {
//         printf("%d ", i);
//     }
    
// }

// int a(long long int n)
// {
//     long long int *arr = calloc(100000000000000000, 8);
//     int j = 0;
//     for(long long int i = n;i;j++,i/=10)
//     {
//         arr[j] = i % 10;
//     }
//     int count = 0;
//     for(int i = j - 1;i >= 0;i--)
//     {
//         count+=arr[i];
//         if(count>10) break;
//     }
//     if(count==10) return 1;
//     return 0;
// }
// int main()
// {
//     printf("%d", a(19));
// }

// long long int a;
// scanf("%lld", &a);
// long long int b = pow(2,(2*a+1))-pow(2,(a+1))+1;
// if (b%5==0)
//     printf("A");
// else
//     print("B");


char ism[100]={},familiya[100]={};
printf("%s","ism? ");
scanf("%[^\n]", ism);









