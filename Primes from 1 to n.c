#include<stdio.h>
int main()
{
    int N,count=0;
    scanf("%d",&N);
    for(int i=2; i<=N; i++)
    {

        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                count++;
            }

        }
        if(count==0)
        {
            printf("%d ",i);
        }
        count=0;
    }
    printf("\n");
    return 0;
}
