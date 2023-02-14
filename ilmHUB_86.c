int main()
{
long long int n, i = 0, min = 0;
scanf("%lld", &n);
char input[100000];
char str;
scanf(" %s", input);
int j, m;
for(;i < n;i++)
{
j = 0;m = 0;
    while(j <= i)
    {
    if(input[j]==input[i])
    {
        m++;
    }                    
    j++;
    } 
    if(m>min)
    {
        min=m;
        str=input[i];
    }
}
printf("%c %d", str, min);
}