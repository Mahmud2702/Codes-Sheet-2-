#include<stdio.h>
int main()
{
    int n,r,y=0;
    scanf("%d",&n);
    int temp;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        y=y*10+r;
        temp=temp/10;
    }
    printf("%d\n",y);
    if(n==y)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
}
