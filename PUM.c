#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int count = 1;
    for(i=0;i<n;i++)
    {
        printf("%d %d %d PUM\n",count,count+1,count+2);
        count +=4;
    }

}
