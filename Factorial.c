#include<stdio.h>
int main()
{
    long long a,c,fact=1;
    scanf("%lld",&c);
    for(int i=1; i<=c; i++)
    {
        scanf("%lld",&a);
        for(int j=1; j<=a; j++)
        {
            fact=fact*j;
        }
        printf("%lld\n",fact);
        fact=1;
    }
}
