#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
             a=1;
    }
    if(a==1)
    {
        printf("NO");
    }else
    {
        printf("YES");
    }
}
