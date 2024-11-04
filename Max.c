#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int flag=0;
    for(i=1;i<=n;i++){
            int num;
    scanf("%d",&num);
    if(num>flag)
    {
        flag=num;
    }
    }
    printf("%d\n",flag);
}
