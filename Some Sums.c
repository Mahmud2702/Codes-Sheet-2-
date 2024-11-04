#include<stdio.h>
int main()
{
    int n,r,a,b,s,i,x,sum=0;
    scanf("%d %d %d",&n,&a,&b);
    for(i=1;i<=n;i++)
        {
            x=i;
            s=0;
    while(x>0)
    {
        r=x%10;
        s=s+r;
        x=x/10;
    }
    if(a<=s && s<=b)
    sum=sum+i;
        }
        printf("%d",sum);
}
